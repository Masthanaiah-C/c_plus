//dynamically allocating memory with function
//overall recap what has been learnt so far
#include <iostream>
using namespace std;
void display(int* p,int size)
{
    int i=0;
	for(i=0;i<size;i++)
	{
		cout<<i<<" value:"<<p[i];
	}
	return ;
}
int* initialise( int* p,int size)
{
p=(int*)malloc(size);
	return p;
}
int main()

{
	cout<<"Enter the size you would like to allocate :";
	int size;
	cin>>size;

int *p;
p=initialise(p,size);
void allot(int*,int);
allot(p,size);
display(p,size);
}
void allot(int *p,int size)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		cout<<"enter the "<<i<<" value:";
		cin>>p[i];
	}
	return ;
}

