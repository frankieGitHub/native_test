#include <iostream>
#include <string>

using namespace std;

#define contain_of(ptr, type, member) ({ \
	((type *)((char *)ptr - (int)(&(((type *)0)->member)))); \
})

struct my_type_stu {
	int age;
	int b;
	int c;
};
int main()
{
	struct my_type_stu m_stu;
	struct my_type_stu * p_stu;
	std::cout << "the addr stu: " 
	<< &m_stu
	<< std::endl;
	
	p_stu = contain_of(&((&m_stu)->c), struct my_type_stu, c);
	
	std::cout << "after contain stu: " 
	<< p_stu
	<< std::endl;
}
