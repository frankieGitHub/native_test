#include <iostream>

using namespace std;

bool test1(char x)
{
	if(x == 'y') {
		cout << "input y" << endl;
		return true;
	}
	else {
		cout << "input not y" << endl;
		return false;
	}
}




int main()
{
	cout << "==" << endl;
	
	bool (*p)(char) = test1;
	p('l');
}
