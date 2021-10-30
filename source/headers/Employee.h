#pragma once
#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
	string firstNamme;
	string LastName;
	int phoneNumber;
	string address;
	int status; // 1 - employer, 2 - manager, 3 - employee

public:
	Employee();
	Employee(string firstName, string lastName,int phoneNumber,string address,int status);

	string getFirstName();
	string getLastName();
	string getName(); //get full name
	int getPhoneNumber();
	string getAddress();
	int getStatus();

	void setFirstName();
	void setLastName();
	void setName(); //get full name
	void setPhoneNumber();
	void setAddress();
	void setStatus();

};