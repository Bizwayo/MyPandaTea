#include "/Users/Bizwayo/Desktop/Projects/C++/MyPandaTea/source/headers/Employee.h"
#include "/Users/Bizwayo/Desktop/Projects/C++/MyPandaTea/source/headers/PandaInterface.h"

using namespace std;

int main() {
	Employee* one = new Employee("Ntanda", "Chisanga", 2045576256, "76 Blackwood Bay", 3);

	cout << one->getAddress() << endl;

	return 0;
}

