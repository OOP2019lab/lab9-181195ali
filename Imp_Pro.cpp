#include "Project.h"

Project ::Project(char* Name, int Budget, int Duration)//overloaded constructor
{
	int count=0;
	for(int i=0; Name[i]!=0 ; i++)
		count++;
	name = new char[count+1];
	for(int i=0 ; Name[i]!=0 ;i++)
		name[i] = Name[i];
	budget = Budget;
	duration = Duration;
}
Project :: Project(const Project& other)//copy constructor
{
	int count = 0;
	for(int i=0; other.name[i]!= 0 ; i++)
		count++;
	name = new char[count+1];
	for(int i=0 ; other.name[i]!= 0 ;i++)
		name[i] = other.name[i];
	budget = other.budget;
	duration = other.duration;
}
friend ostream& operator<<(ostream& osObject, const Project& other) //overloaded insertion operator
	{
		osObject<<"Name of the project: "<<other.name;
		osObject<<"Budget: "<<other.budget;
		osObject<<"Duration: "<<other.duration<<" days";
		return osObject;
	}
const Project& Project::operator=(const Project& other)//overloaded assignment operator
{
	int count = 0;
	for(int i=0; other.name[i]!= 0 ; i++)
		count++;
	delete[] name;
	name = new char[count+1];
	for(int i=0 ; other.name[i]!= 0 ;i++)
		name[i] = other.name[i];
	budget = other.budget;
	duration = other.duration;
	return *this;
}
void Project :: setBudget(int bud)
{
	budget = bud;
} 
Project :: ~Project()
{
	delete[] name;
}