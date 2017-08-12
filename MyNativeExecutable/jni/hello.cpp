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

int mystrcmp(char *s1, char *s2)
{
	while(*s1) {
		if(*s1 == *s2) {
			s1++;
			s2++;
			continue;
		}
		else break;
	}
	
	return *s1 - *s2;
}

int main()
{
	struct my_type_stu m_stu;
	struct my_type_stu * p_stu;
	
	char *s1 = "abcd";
	char *s2 = "abcde";
	int i = -1;
	
	std::cout << "the addr stu: " 
	<< &m_stu
	<< std::endl;
	
	p_stu = contain_of(&((&m_stu)->c), struct my_type_stu, c);
	
	std::cout << "after contain stu: " 
	<< p_stu
	<< std::endl;
	
	i = mystrcmp(s1,s2);
	cout << "strcmp:" 
	<< i << endl;
}
