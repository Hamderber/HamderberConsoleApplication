#include "CommandHandler.h"
#include <iostream>
#include "Command.h"
#include "Main.h"
#include "StringTools.h"

namespace Hamderber
{
	CommandHandler::CommandHandler()
	{
		BuildCommands();
	}

	CommandHandler::~CommandHandler()
	{

	}

	void CommandHandler::ExecuteCommand()
	{

	}
	void CommandHandler::InterpretCommand(std::string input)
	{
		input = StringTools::ToLower(input);
		std::cout << "Command recieved: " << input << std::endl;
	}

	void CommandHandler::BuildCommands()
	{
		/*for (auto e : Command::CommandType)
		{

		}*/
	}
}