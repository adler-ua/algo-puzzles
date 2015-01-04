// AlgoPuzzles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include "CheckUniqueChars.h"
#include "ReverseString.h"
#include "CheckStringReshuffle.h"
#include "ReplaceSpaces.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Puzzle* puzzle = new ReplaceSpaces();
	puzzle->Execute();
	std::cin.get();

	return 0;
}

