#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"

class BouncyBall
{
	public:
		void setTexture(SDL_Texture *tex);
		void draw(SDL_Renderer *rend);
		void update();
		
		void setPos(float x,float y);
		
	
	
	private:
	SDL_Texture *texture = nullptr;
	float x=0 , y=0;
	float dy = 0;
	const gravity = 0.02;
};