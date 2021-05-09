//inheritance example of class
#include <iostream>
using namespace std;
class parent
{
	public:
		int id_1;
//initialisation during the class initiation
		parent()
		{
			id_1=11;}
};

class child: public parent
{
	public:
	int id_2;	
		int f(int input);
//initialisation during class
	child()
	{
		id_2=id_1+5;}
};

int child::f(int input)
{
	return input +1;
}

int main()
{
	child test;
	cout<< test.id_2;
	cin>>test.id_1;
	test.id_2=test.f(test.id_1);
	cout<< test.id_2;
}



