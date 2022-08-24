#pragma once
#include <iostream>
#include "Command.h"
#include "Main.h"
#include "CommandHandler.h"

namespace Hamderber
{
	bool Main::ProgramRunning = false;
	

	Main::Main()
	{
		Start();
	}

	Main::~Main()
	{
		cout << "Application quitting." << std::endl;
	}

	void Main::Start()
	{
		Main::ProgramRunning = true;
		ApplicationVersion = "0.0.1a";
		cout << "Hamderber's Console App! (Version " << ApplicationVersion << ")" << std::endl;
		MainLoop();
	}

	void Main::MainLoop()
	{
		while (ProgramRunning)
		{
			std::cout << "Enter a command: ";
			char input[CommandHandler::MaxCommandLength];
			std::cin.getline(input, CommandHandler::MaxCommandLength);
			CommandHandler::InterpretCommand(input);
			Command::ExecuteCommand();
			Command::Quit();
		}
	}
}