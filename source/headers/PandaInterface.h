#pragma once
#ifndef PANADAINTERFACE_H
#define PANADAINTERFACE_H
//WILL USE mySQL database to retrieve information
//#include <sql.h>
#include <iostream>
#include <string>
#include <mysql.h>

using namespace std;

class PandaInterface {
public:
	void createSchedule(); //owner
	void printSchedule();
	void getHours();
	void getPay();

private:
	MYSQL* conn;
};

#endif // !PANADAINTERFACE_H


