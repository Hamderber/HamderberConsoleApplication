#include "CommandHandler.h"
#include <iostream>
#include "Command.h"
#include "Main.h"
#include "StringTools.h"

namespace Hamderber
{
	void CommandHandler::ExecuteCommand()
	{

	}
	void CommandHandler::InterpretCommand(std::string input)
	{
		std::cout << "Command recieved: " << input << std::endl;
		StringTools::ToLower(input);
	}
}