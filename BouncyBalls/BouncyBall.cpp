#include "BouncyBall.h"
#include <math.h>

void BouncyBall::setTexture(SDL_Texture *tex){
	texture = tex;
}
void BouncyBall::draw(SDL_Renderer *rend){
	SDL_Rect rect = {(int)x,(int)y,32,32};
	SDL_RenderCopy(rend,texture,nullptr,&rect);
}

void BouncyBall::update(){
	if(y>0)
	{
		y += dy;
		dy += gravity;
	}
	else
	{
		dy *= -0.5;
		if(fabs(dy)< 0.01)
		{
			dy = 0;
		}
	}
	
}

void BouncyBall::setPos(float x,float y){
	this->x = x;
	this->y = y;
}
