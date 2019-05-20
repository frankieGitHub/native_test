#include <iostream>

using namespace std;

int strCmp(char* s1, char* s2)
{
	while(*s1) {
		if(*s1 == *s2) {
			
		}
		else return (*s1 - *s2);
		s1++;
		s2++;
	}
	
	return (*s1 - *s2);
}

int main()
{
	char* ss1 = "aabbbccc";
	char* ss2 = "aabbbccc";
	
	cout << strCmp(ss1, ss2) << endl;
}
