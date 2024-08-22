#pragma once

#include <iostream>
#include <chrono>

class Simple_Timer
{
public:
	Simple_Timer();
	~Simple_Timer();
private:
	std::chrono::steady_clock::time_point start;
	std::chrono::steady_clock::time_point end;
};
