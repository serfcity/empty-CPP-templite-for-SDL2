namespace WINDOW
{
	class windows
	{
		public:
			windows();
			~windows();

			/*Function for create window*/
			int InitWindow(std::string get_window_name,	//window title.
				       	int Xsize,			//window hieght rezolution.
				       	int Ysize);			//window width rezolution.
			
			bool isOpen(); 		//Getter of 'opened' varitable.
			int rezolutionX; 	//Window hieght rezolution.
			int rezolutionY; 	//Window width rezolution.
			std::string title; 	//The title of window.
			SDL_Window *SDL_WIN; 	//SDL_Window pointer.

		private:
			bool opened;		//This varitable show OPEN or CLOSE status of window.

	};
	extern windows *main_win;		//The pointer for main window. (See window.cpp).
	
}
