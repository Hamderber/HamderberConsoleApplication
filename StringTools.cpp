#pragma once
#include <iostream>
#include <algorithm>
#include <string>
#include "StringTools.h"

namespace Hamderber
{
	std::string StringTools::ToLower(std::string string)
	{
		transform(string.begin(), string.end(), string.begin(), ::tolower);
		return string;
	}

	std::string StringTools::ToUpper(std::string string)
	{
		transform(string.begin(), string.end(), string.begin(), ::toupper);
		return string;
	}
}