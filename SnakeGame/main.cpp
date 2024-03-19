#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <ncurses.h>
using namespace std;


bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
int tailX[100],tailY[100];
int nTail;
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
            else
            {
                bool print = false;
                for(int k = 0;k<nTail ; k++)
                {
                    
                    if(tailX[k]==j && tailY[k]==i)
                    {
                        cout<<"o";
                        print = true;
                    }
                    
                }
                if(!print)
                {
                    cout<<" ";
                }
            }
            
            if( j== width-1 ) cout<<"*";
        }
        cout<<endl;
    }

    for(int i=0; i<width; i++) cout<<"*";

    cout<<"\nScore:"<<score<<endl;
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
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X,prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for(int i=1 ; i<nTail; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
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

    if(x==width)
    {       
        x=width-1;
    }
    if(x<0)
    {
        x=0;
    }
    if(y==height)
    {
        y=height-1;
    }
    if(y<0)
    {
        y=0;
    }
    if( x== fruitX && y == fruitY )
    {
        score += 10;
        fruitX = rand()% width;
        fruitY = rand()% height;
        nTail++;
    }
    
    for(int i=0 ; i<nTail; i++)
    {
        if(tailX[i]==x && tailY[i]==y)
        {
            gameOver=true;
        }   
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