#include "Employee.h"

int Count(char* arr)
{
	int count=0;
	for(int i=0; arr[i]!=0 ; i++)
		count++;
	return count;
}
Employee :: Employee(char* name, const Address& add)//overloaded constructor
{
	int y= Count(name);
	emp_name = new char[y+1];
	for(int i=0 ; name[i]!= 0 ; i++)
		emp_name[i] = name[i];
	

	//char* house_Number;
	//char* street_Name ;
	//char* city;
	//char* county;

}