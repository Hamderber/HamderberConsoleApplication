#pragma once
#include <iostream>
#include "Command.h"
#include "Main.h"

using namespace std;

namespace Hamderber
{
	class Command
	{
	public:
		enum CommandType
		{
			HELP,
			QUIT,
			UNKNOWN
		};
		static void ExecuteCommand(CommandType command = UNKNOWN);
		static void Quit();
	private:
		static void UnknownCommand();
	};
}