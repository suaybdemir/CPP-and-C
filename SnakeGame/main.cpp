#include <iostream>
#include <unistd.h>
#include <ncurses.h>
using namespace std;


bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;


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
            if( j==0 ) cout<<"*"; 
            if( i == y && j ==x) cout<< "O";
            
            else if( i == fruitY && j == fruitX ) cout<< "F";
            else cout<<" ";

            if( j== width-1 ) cout<<"*";
        }
        cout<<endl;
    }

    for(int i=0; i<width; i++) cout<<"*";
}

void Input()
{
    char key = getch();
        switch(key)
        {
            case 'a':
                dir=LEFT;
                break;;
            case 'd':
                dir=RIGHT;
                break;
            case 'w':
                dir=UP;
                break;
            case 's':
                dir=DOWN;
                break;
            case 'x':
                gameOver=true;
                break;
        }
    }

void Logic()
{
    switch (dir)
    {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }
}

int main(void)
{
    Setup();
    initscr();
    
    while(!gameOver)
    {
        Draw();
        cbreak();
        Input();
        endwin();
        Logic();
        usleep(100);
    }
    
    return 0;
}