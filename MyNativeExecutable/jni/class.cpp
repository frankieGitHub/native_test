#include <iostream>
using namespace std;

class student {
	int id;
	string name;
public:
	student() {
		cout << "construct" << endl;
	}
	
	~student() {
		cout << "dis construct" << endl;
	}
};

class goodStudent : student
{
	
};

int main()
{
	student mstudent1;
	cout << ".."<<endl;
}
