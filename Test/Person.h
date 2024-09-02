#pragma once

#include <iostream>
#include <string>
class Person
{
public:
	Person();
	~Person();
	int GetAge();

private:
	int age;
	std::string name;
};

