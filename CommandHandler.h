#pragma once
#include <iostream>
#include "Command.h"
#include "Main.h"

namespace Hamderber
{
	class CommandHandler
	{
	public:
		static const int MaxCommandLength = 100;
		static void ExecuteCommand();
		static void InterpretCommand(std::string input);
		CommandHandler();
		~CommandHandler();
	private:
		void BuildCommands();
	};
}
