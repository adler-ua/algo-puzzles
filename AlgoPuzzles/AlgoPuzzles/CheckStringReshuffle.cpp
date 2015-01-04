#include "stdafx.h"
#include "CheckStringReshuffle.h"
#include <string>
#include <iostream>

bool Check(std::string a, std::string b)
{
	// a=xy b=yx
	// aa= xyxy
	// xyxy contains yx
	// aa contains b

	return (a + a).find(b) != std::string::npos;
}

void CheckStringReshuffle::Execute()
{
	std::string a = "abcde";
	std::string b = "deabc";
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	bool contains = Check(a, b);
	std::cout << contains << std::endl;
	a = "abcde";
	b = "edabc";
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Check(a, b) << std::endl;
}