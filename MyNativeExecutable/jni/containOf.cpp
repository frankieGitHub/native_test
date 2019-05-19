#include <iostream>

using namespace std;

#define contain_of(ptr, type, member) ({ \
	((type *)((char *)ptr - (int)(&(((type *)0)->member)))); \
})

struct Student{
	string name;
	int age;
	int id;
};

struct Student myStudent;

int main() {
	
	cout << "the head addr is: "
	<< &myStudent << endl;
	
	cout << "contain of is: "
	<< contain_of(&myStudent.id, struct Student, id)
	<< endl;
	
	return 0;
}
