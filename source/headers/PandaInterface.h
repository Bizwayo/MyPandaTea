#pragma once
#ifndef PANADAINTERFACE_H
#define PANADAINTERFACE_H
//WILL USE mySQL database to retrieve information
//#include <sql.h>
#include <iostream>
#include <string>
#include <mysql.h>
#include "/Users/Bizwayo/Desktop/Projects/C++/MyPandaTea/source/headers/Employee.h"

using namespace std;

class PandaInterface {
private:
	MYSQL* connect;

public:
	PandaInterface(const string host, const string user, const string password, const string dbase);
	~PandaInterface();
	void createSchedule(); //owner
	void printSchedule();
	void getHours();
	void getPay();
};

#endif // !PANADAINTERFACE_H


