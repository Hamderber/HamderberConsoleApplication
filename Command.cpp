#pragma once
#include <iostream>
#include "Command.h"
#include "Main.h"

namespace Hamderber
{
	void Command::ExecuteCommand(CommandType command)
	{
		switch (command)
		{
			case CommandType::HELP:

				break;
			case CommandType::QUIT:
				Command::Quit();
				break;
			default:
				Command::UnknownCommand();
				break;
		}
	}

	void Command::Quit()
	{
		Main::ProgramRunning = false;
	}

	void Command::UnknownCommand()
	{
		std::cout << "Unknown command. Type \"help\" for available commands." << std::endl;
	}
}