#pragma once
#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
	string FirstName;
	string LastName;
	int PhoneNumber;
	string Address;
	int Status; // 1 - employer, 2 - manager, 3 - employee

public:
	Employee();
	Employee(string firstName, string lastName,int phoneNumber,string address,int status);

	string getFirstName();
	string getLastName();
	string getName(); //get full name
	int getPhoneNumber();
	string getAddress();
	int getStatus();

	void setFirstName(string name);
	void setLastName(string name);
	void setPhoneNumber(int num);
	void setAddress(string addr);
	void setStatus(int s);

};