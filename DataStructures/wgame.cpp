#include <iostream>

using namespace std;

#include <string.h>

class Word{
	private:
	char *word;
	
	public:
	Word(char * w)
	{
		word = w;
	}
	void setWord(char *w)
	{
		this->word = w;
	}
	char *getWord()
	{
		return word;
	}
};
class Utility
{
	public :
	bool Output(Word w){
		
	 int length = strlen(w.getWord());

  
   	 if (length % 2 != 0) {
        cout << w.getWord() << " is an incorrect input" << endl;
        return false;
   	 }
  	
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (w.getWord()[i] != w.getWord()[j]) 
			{
               cout << w.getWord() << " is not a valid string" << endl;
                return false;
            }
           
        }
       
    
    }

    cout << w.getWord() << " is a valid string" << endl;
    return true;
	}
};

int main(void)
{
	char text[20];
	cout<<"Enter the string:"<<endl;
	cin>>text;
	
	Word obj(text);
	
	Utility u1;
	
	u1.Output(obj);
	
	
	return 0;
	
}
