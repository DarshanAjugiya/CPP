#include<conio.h>
#include<iostream.h>
class demo
{       static int a;
	public:
	void fun()
	{
		a++;
		cout<<"value is = "<<a<<endl;

	}

};
int demo::a;
void main()
{

	clrscr();
	demo d,d1,d2;
	d.fun();
	d1.fun();
	d2.fun();
	getch();
	
}