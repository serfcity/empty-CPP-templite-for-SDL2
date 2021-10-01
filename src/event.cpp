#include <SDL2/SDL.h>
#include <string>
#include "global.h"
#include "window.h"


namespace EVENT
{
	SDL_Event event_pool;

	void EventSpooler()
	{
		while(SDL_PollEvent(&event_pool) != 0)
		{
			if(event_pool.type == SDL_QUIT)
			{
				delete WINDOW::main_win;
			}
		}
	}
}
