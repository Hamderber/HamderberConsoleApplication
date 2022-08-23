#pragma once
#include <iostream>
#include "Command.h"
#include "Main.h"

namespace Hamderber
{
	class Main
	{
	public:
		Main();
		~Main(void);
		static bool ProgramRunning;
		std::string ApplicationVersion;
		void Start();
	private:
		void MainLoop();
	};
}