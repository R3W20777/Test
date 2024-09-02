#include "Simple_Timer.h"


Simple_Timer::Simple_Timer()
{
	start = std::chrono::high_resolution_clock::now();
}

Simple_Timer::~Simple_Timer()
{
	setlocale(LC_ALL, "RUS");
	end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<float> duration = end - start;
	std::cout << "Время выполнения кода: " << duration.count() << " секунд" << std::endl;
}