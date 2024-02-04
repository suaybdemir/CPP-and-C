#include "inc/SDL.h"
#include "inc/SDL_image.h"
#include <stdio.h>

#undef main

static SDL_Texture *ball = nullptr;

int processEvents(SDL_Window *window)
{
	SDL_Event event;
	int done = 0;
	
	while(SDL_PollEvent(&event))
	{
		switch(event.type)
		{
			case SDL_WINDOWEVENT_CLOSE:
			
				if(window){
					SDL_DestroyWindow(window);
					window = NULL;
					done = 1;
				}
			
				break;
			case SDL_KEYDOWN:
			
				switch(event.key.keysym.sym)
				{
					case SDLK_ESCAPE:
						done = 1;
					break;
				}
			
				break;
			case SDL_QUIT:
				done = 1;
				break;
		}
	}
	
	return done;
}

void doRender(SDL_Renderer *renderer)
{
	
	SDL_SetRenderDrawColor(renderer,240,240,255,255);
	
	SDL_RenderClear(renderer);
	
	SDL_SetRenderDrawColor(renderer,255,255,255,255);
	
	SDL_Rect rect = {0,0,32,32};
	
	SDL_RenderCopy(renderer,ball,nullptr,&rect);
	
	SDL_RenderPresent(renderer);
}

int main(int argc, char *argv[])
{
	SDL_Window *window;
	SDL_Renderer *renderer;
	
	SDL_Init(SDL_INIT_VIDEO);
	
	window = SDL_CreateWindow("Game Window",
								SDL_WINDOWPOS_UNDEFINED,
								SDL_WINDOWPOS_UNDEFINED,
								640,
								480,
								0);
								
	renderer = SDL_CreateRenderer(window, -1,SDL_RENDERER_ACCELERATED);
	
	auto surface = IMG_Load("ball.png");
	if(surface)
	{
		ball = SDL_CreateTextureFromSurface(renderer , surface);
	}
	else
	{
		return 1;
	}

	
	int done = 0;
	
	while(!done)
	{
		done = processEvents(window);
		
		doRender(renderer);
		
		SDL_Delay(10);
	}
	
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	
	SDL_Quit();
	
	return 0;
}
