#include <iostream>
using namespace std;
class function
{
int a;
int b;
int c;
	public:
int funct(int,int,int);

};
int function::funct(int a1,int b1,int c1)
{
	a=a1;
	b=b1;
	c=c1;
	return a+b+c;
}
int main()

{
	
	function object;
	cout<<object.funct(3,4,5);
	return 0;

}
