#include "stdafx.h"
#include "ReplaceSpaces.h"
#include <iostream>


char* Replace(char* input, int length)
{
	// calculate new length of string:
	int newLength = length;
	for (int i = 0; i < length; i++)
	{
		if (input[i] == ' ')
			newLength += 2;
	}
	// allocate memory for new string
	char* result = new char[newLength+1];
	for (int i = 0, j = 0; i < length; i++, j++)
	{
		if (input[i] == ' ')
		{
			// replace ' ' by '%20'
			result[j++] = '%';
			result[j++] = '2';
			result[j] = '0';
		}
		else
		{
			result[j] = input[i];
		}
	}
	// put end of string
	result[newLength] = '\0';
	return result;
}

void ReplaceSpaces::Execute()
{
	char input[] = "Mr   John Smith ";
	int length = 15;
	std::cout << input << std::endl;
	char* result = Replace(input, length);
	std::cout << result << std::endl;
}
