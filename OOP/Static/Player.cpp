
#include<iostream>
using namespace std;

class Player //DO NOT change the class name
{
private:
    int playerID;
    string playerName;
    int playedMatches;
    int playerScore;
public:

    //Implement a parameterized constructor for 3 arguments - playerID, playerName and playerScore.
    void setPlayerId(int playerID)
    {
        this->playerID=playerID;
    }
    int getPlayerID(){
        return playerID;
    }
    void setPlayerName(string playerName)
    {
        this->playerName=playerName;
    }
    string getPlayerName(){
        return playerName;
    }
    void setPlayedMatches(int playedMatches){
        this->playedMatches=playedMatches;
    }
    int getPlayedMatches()
    {
        return playedMatches;
    }
    void setPlayerScore(int playerScore){
        this->playerScore=playerScore;
    }
    int getPlayerScore(){
        return playerScore;
    }
    
    void displayThreeArgument()
    {       
         cout<<"Player ID :"<<getPlayerID()<<endl;
         cout<<"\nPLayer Name :"<<getPlayerName()<<endl;
         cout<<"\nPlayer Score :"<<getPlayerScore()<<endl;
    }
    
    Player(int playerID,string playerName,int playerScore)
    {
        setPlayerId(playerID);
        setPlayerName(playerName);
        setPlayerScore(playerScore);
        displayThreeArgument();
    }
    
    void displayFourArgument()
    {
       cout<<"\nPlayer ID :"<<getPlayerID()<<endl;
       cout<<"\nPlayer Name :"<<getPlayerName()<<endl;
       cout<<"\nPlayed Matches :"<<getPlayedMatches()<<endl;
       cout<<"\nPLayer Score :"<<getPlayerScore()<<endl;
    }
    
    Player(int playerID,string playerName,int playedMatches,int playerScore)
    {
        setPlayerId(playerID);
        setPlayerName(playerName);
        setPlayedMatches(playedMatches);
        setPlayerScore(playerScore);
        displayFourArgument();
    }

    
    
    ~Player(){
        cout<<"\nDestructor Called"<<endl;
    }

};
int main(){
    
    Player p1(1001,"John",130);
    Player p2(1002,"Raj",100,5000);
    return 0;
}
