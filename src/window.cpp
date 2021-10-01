#include <iostream>
#include <SDL2/SDL.h>
#include <string>
#include "global.h"
#include "window.h"
#include "event.h"


namespace WINDOW
{
	windows::windows()
	{
		opened = true;
	}
	windows::~windows()
	{
		opened = false;
		SDL_DestroyWindow(SDL_WIN);
		SDL_Quit();
	}
	int windows::InitWindow(std::string get_window_name, int Xsize, int Ysize)
	{
		rezolutionX = Xsize;
		rezolutionY = Ysize;
		title = get_window_name;

		//Initilize SDL_Window (element 'SDL_WIN') of 'windows' class.
		SDL_WIN = SDL_CreateWindow(title.c_str(),
			       	SDL_WINDOWPOS_CENTERED,
			       	SDL_WINDOWPOS_CENTERED,
			       	rezolutionX,
			       	rezolutionY,
				0);

		if(SDL_WIN == NULL) //Check that window was succcessfully created.
		{
			printf("Could not create window! Error: %s\n", SDL_GetError());
			return 1;
		}
		return 0;
	}
	bool windows::isOpen()
	{
		return opened;
	}
	
	windows *main_win = new windows();
}
