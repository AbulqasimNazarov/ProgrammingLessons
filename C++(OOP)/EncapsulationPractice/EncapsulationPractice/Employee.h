#pragma once
class Employee
{
public:
	string name;
	double salary;
	Employee()
	{
		this->name = "Unknown";
		this->salary = 0;
	};
	Employee(string name)
	{
		this->name = name;
	};
	Employee(string name, double salary)
	{
		this->salary = salary;
		this->name = name;
	};
	
};

