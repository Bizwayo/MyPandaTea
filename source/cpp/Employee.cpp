#include "/Users/Bizwayo/Desktop/Projects/C++/MyPandaTea/source/headers/Employee.h"


Employee::Employee(string firstName, string lastName, int phoneNumber, string address, int status) {
	FirstName = firstName;
	LastName = lastName;
	PhoneNumber = phoneNumber;
	Address = address;
	Status = status;
}

//Accessors
string Employee::getFirstName() {
	return FirstName;
}

string Employee::getLastName() {
	return LastName;
}

string Employee::getName() {
	return FirstName + " " + LastName;
}
int Employee::getPhoneNumber() {
	return PhoneNumber;
}
string Employee::getAddress() {
	return Address;
}

int Employee::getStatus() {
	return Status;
}


//Mutators
void Employee::setFirstName(string name) {
	FirstName = name;
}
void Employee::setLastName(string name) {
	LastName = name;
}
void Employee::setPhoneNumber(int num) {
	PhoneNumber = num;
}
void Employee::setAddress(string addr) {
	Address = addr;
}
void Employee::setStatus(int s) {
	Status = s;
}