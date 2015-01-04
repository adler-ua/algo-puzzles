#include "stdafx.h"
#include "ReverseString.h"
#include <cstring>
#include <iostream>

void Reverse(char* input)
{
	// find end of string:
	char* end = input;
	while (*end)
	{
		end++;
	}
	// move one char back
	end--;
	// swap all from start to end:
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
