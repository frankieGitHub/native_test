#include <iostream>

using namespace std;


int main()
{
	union {
		int a;
		char b;
	}w;
	
	w.a = 0x01;
	if(w.b == 0x01) cout << "little endian" << endl;
	else cout << "big endian" << endl;
	
	unsigned char test = 0x10;
	test>>1 == 8 ? cout << "little endian" << endl:
	cout << "big endian" << endl;
}
