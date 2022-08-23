#pragma once
#include <iostream>
#include "Command.h"
#include "Main.h"

namespace Hamderber
{
	class CommandHandler
	{
	public:
		static void ExecuteCommand();
		static void InterpretCommand(std::string input);
	};
}
