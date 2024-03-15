
void Setup()
{
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = width / 2;
    fruitX = rand()% width;
    fruitY = rand()% height;
    score = 0;
}

void clearScreen() {
  std::cout << "\033[2J\033[1;1H"; // Clear screen and move cursor to top-left corner
}

void Draw()
{
    clearScreen();
    for(int i=0; i< width; i++) cout<<"*";
    cout<<endl;
    for(int i=0; i<height;i++)
    {
        for(int j=0; j<width ; j++)
        {
            if( j==0) cout<<"*"; 
            else if(j== width-1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<width; i++) cout<<"*";
}

void Input()
{


}

void Logic()
{



}
