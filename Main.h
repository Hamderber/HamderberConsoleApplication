#pragma once
#include "includes.h"

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