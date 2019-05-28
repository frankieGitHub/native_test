#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
	int pid = fork();
	if(pid == 0) {
		 cout << "child p" << endl;
	}
	   
	else if(pid > 0) {
		cout << "farther p" << endl;
	}
	else cout << "err" << endl;
		
	
}
