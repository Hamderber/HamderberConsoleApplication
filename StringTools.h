#pragma once
#include <iostream>
#include <string>
#include "StringTools.h"

namespace Hamderber
{
	class StringTools
	{
	public:
		static std::string ToLower(std::string string);
		static std::string ToUpper(std::string string);
	};
}