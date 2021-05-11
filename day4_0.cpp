//friend functions
 #include <iostream>
using namespace std;
class frnd
{
	int a1;
	int a2;
	public:
	frnd()
	{
	a1=5;
	a2=10;
	}
	public:
	friend int sum(frnd g);
	public:
	int f;
};
int sum(frnd g)
{
return g.a1+g.a2;
}

 int main()
{
	frnd f1;
	f1.f=0;
	cout<<sum(f1);
	return 0;

}

