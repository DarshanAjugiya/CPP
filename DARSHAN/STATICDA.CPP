#include<iostream.h>
#include<conio.h>
class demo
{
	static int a;
	public: void fun()
	{
		a++;
		cout<<" value of a"<<a<<endl;
	}
};
int demo::a;
int main()
{
	clrscr();
	demo d1,d2,d3;
	d1.fun();
	d2.fun();
	d3.fun();
	getch();
	return 0;
}