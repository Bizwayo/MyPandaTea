#include "/Users/Bizwayo/Desktop/Projects/C++/MyPandaTea/source/headers/PandaInterface.h"
#include <string>
#include <iostream>
using namespace std;

PandaInterface::PandaInterface(const string host, const string user, const string password, const string dbase) {
	connect = mysql_init(NULL);
	if (!connect) {
		cout<< "MySQL Failed" << endl;
	}
	else {
		connect = mysql_real_connect(connect, host.c_str(), user.c_str(), password.c_str(), dbase.c_str(), 0, NULL, 0);
		if (!connect) {
			cout << "MySQL connection Failed" << endl;
		}
	}
}
PandaInterface::~PandaInterface() {
	mysql_close(connect);
}
void PandaInterface::createSchedule() {} //owner
void PandaInterface::printSchedule() {}
void PandaInterface::getHours() {}
void PandaInterface::getPay() {}
