#include <iostream>

using namespace std;

template <class T>
T revT(T t)
{
    T out = 0;

    for(int i=0; i<sizeof(T)*8; i++)
    {
        if(t & (1<<i))
          out |= 1 << (sizeof(T)*8-1-i);
    }

    return out;
}

int main()
{
	cout << hex << revT(0x11) << endl;
	
}
