// SurvaySomeFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <chrono>
#include <Windows.h>

long long timeTest()
{
	auto const begin = std::chrono::steady_clock::now();
	std::cout << "Hello Corona Virus!\n";
	//Sleep(1);
	auto const end = std::chrono::steady_clock::now();
	return std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count();
}

int main()
{
	std::cout<<timeTest()<<std::endl;
    
}
