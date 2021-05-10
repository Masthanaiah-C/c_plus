#include <iostream>
#include <cstring> // this header files include string operations to thecode

using namespace std;
class clas
{
//class links theh code and data
//private functions and data are accessed by othermembers of the class
//protected is allowed only when inheritence is allowed
//protected is used only when there is inheritence else no use
//public is allowed to other parts of the program
char name[80]; //private
	public:
	void putname(char *n);
	void getname(char *n);
	private:
	double wage;
	public:
	double getwage();
	void putwage(double w);
	
};

void clas::putname(char *n)
{
	strcpy(name,n);
}
void clas::getname(char *n)
{
	strcpy(n,name);
}
void clas::putwage(double w)
{
	wage = w;
}
double clas::getwage()
{
	return wage;
}


int main()
{
clas h;
h.putwage(10000);
char c[80]="masthanaiah";
char m[80];
h.putname(c);
h.getname(m);
cout << m << h.getwage();
	return 0;

}

