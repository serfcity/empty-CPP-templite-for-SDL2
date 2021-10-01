#include <iostream>
#include <string>
#include <SDL2/SDL.h>
#include "window.h"
#include "event.h"


int main()
{
	if(SDL_Init(SDL_INIT_EVERYTHING) != 0) //Try initilize SDL.
	{
		printf("SDL could not initilazed! Error: %s\n",  SDL_GetError());
		return 1;
	}

	if(WINDOW::main_win->InitWindow("The test window!", 1024, 768)) //Try create window.
		return 2;
	
	/* Main program loop. */
	while(WINDOW::main_win->isOpen())
	{
		EVENT::EventSpooler();
	}
	

	return 0;
}
