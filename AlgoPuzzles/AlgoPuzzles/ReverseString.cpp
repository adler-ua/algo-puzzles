#include "stdafx.h"
#include "ReverseString.h"
#include <cstring>
#include <iostream>

void Reverse(char* input)
{
	char* end = input;
	while (*end)
	{
		end++;
	}
	end--;
	while (input < end)
	{
		char tmp = *input;
		*input++ = *end;
		*end-- = tmp;
	}
}

void ReverseString::Execute()
{
	char input[] = "abcdef ghijklm   pomfd";
	std::cout << input << '\n';
	Reverse(input);
	std::cout << input << '\n';
}
