#include "Address.h"

int Counter(char* arr)
{
	int count=0;
	for(int i=0; arr[i]!=0 ; i++)
		count++;
	return count;
}
Address :: Address(char* House_Number, char* Street_Name, char * City,char* Country)// overloaded constuctor
{
	int a = Counter(House_Number);
	house_Number = new char[a+1];
	for(int i=0; House_Number[i]!=0 ; i++)
		house_Number[i] = House_Number[i];
	int b = Counter(Street_Name);
	street_Name = new char[b+1];
	for(int i=0; Street_Name[i]!=0 ; i++)
		street_Name[i] = Street_Name[i];
	int c= Counter(City);
	city = new char[c+1];
	for(int i=0; City[i]!=0 ; i++)
		city[i] = City[i];
	int d = Counter(Country);
	county = new char[d+1];
	for(int i=0; Country[i]!=0 ; i++)
		county[i] = Country[i];
}
Address :: Address(const Address& add)// copy constuctor
{
	int a = Counter(add.house_Number);
	house_Number = new char[a+1];
	for(int i=0; add.house_Number[i]!=0 ; i++)
		house_Number[i] = add.house_Number[i];
	int b = Counter(add.street_Name);
	street_Name = new char[b+1];
	for(int i=0; add.street_Name[i]!=0 ; i++)
		street_Name[i] = add.street_Name[i];
	int c= Counter(add.city);
	city = new char[c+1];
	for(int i=0; add.city[i]!=0 ; i++)
		city[i] = add.city[i];
	int d = Counter(add.county);
	county = new char[d+1];
	for(int i=0; add.county[i]!=0 ; i++)
		county[i] = add.county[i];
}
friend ostream& operator<<(ostream& osObject, const Address& add)
	{
		osObject<<"House no. : "<<add.house_number;
		osObject<<"Street name: "<<add.street_Name;
		osObject<<"City : "<<add.city;
		osObject<<"Country : "<<add.county;

		return osObject;
	}
const Address& Address::operator=(const Address& other)// overloaded assignment operator
{
	if(this != &other)
	{
		
	
	}
	return *this;
}
Address :: ~Address()//destructor
{
	delete[] house_Number;
	delete[] street_Name ;
	delete[] city;
	delete[] county;

}
