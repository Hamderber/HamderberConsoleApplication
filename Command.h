#pragma once
#include "includes.h"

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