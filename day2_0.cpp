//this is a trail of c++ classes
//classses are saame as defining structures 
#include <iostream>
using namespace std;
class power
{
	public:
	int result (int base, int exponent);
};

int power::result(int base, int exponent)
{int resultant=base;
	if(exponent==0)
	{
	return 1;
	}

	while(--exponent)
	{
		resultant= resultant*base;
	}
return resultant;
}

int main()
{
power test1;
cout<<test1.result(2,2);
}


