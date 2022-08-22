#include "includes.h"

namespace Hamderber
{
	Main::Main()
	{
		Start();
	}

	Main::~Main()
	{
		cout << "Application quitting." << endl;
	}

	void Main::Start()
	{
		Main::ProgramRunning = true;
		ApplicationVersion = "0.0.1a";
		cout << "Hamderber's Console App! (Version " << ApplicationVersion << ")" << endl;
		MainLoop();
	}

	void Main::MainLoop()
	{
		/*while (ProgramRunning)
		{
			Command::ExecuteCommand();
			Command::Quit();
		}*/
	}
}