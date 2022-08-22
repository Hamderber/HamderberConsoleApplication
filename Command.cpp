#pragma once
#include "includes.h"

namespace Hamderber
{
	void Command::ExecuteCommand(CommandType command)
	{
		switch (command)
		{
			case HELP:

				break;
			case QUIT:
				Command::Quit();
				break;
			default:
				Command::UnknownCommand();
				break;
		}
	}

	void Command::Quit()
	{
		//Main::ProgramRunning = false;
	}

	void Command::UnknownCommand()
	{
		cout << "Unknown command. Type \"Help\" for available commands." << endl;
	}
}