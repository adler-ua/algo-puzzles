#include "stdafx.h"
#include "CheckUniqueChars.h"
#include <string>
#include <iostream>


void CheckUniqueChars::Execute()
{
	bool indicators[256] = {};
	char* s = "abcd eokd";
	for (int i = 0; i < strlen(s); i++)
	{
		if (indicators[s[i]])
		{
			std::cout << "not unique";
			return;
		}
		indicators[s[i]] = true;
	}
	std::cout << "unique";
}
