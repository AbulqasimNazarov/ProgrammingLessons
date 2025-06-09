#pragma once
class StudentGroup
{
private:
	
	string name;
	int grades;
	int age;
public:
	StudentGroup()
	{

	}
	StudentGroup(string name, int age)
	{
		this->name = name;
		this->age = age;
		
	}
	void AddStudentGrade(int grade) {
		this->grades = grade;
	}
	
};

