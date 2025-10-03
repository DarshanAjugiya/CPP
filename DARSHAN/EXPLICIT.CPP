#include<iostream.h>
#include<conio.h>
class demo
{
	int a;
	public: demo()
	{
		a=0;

	}
	demo(int x)
	{
		a=x;
	}
	void show()
	{
		cout<<endl<<a;

	}

};
void main()
{
	clrscr();
	int data;
	demo d;
	d.show();
	d=demo(100);
	d.show();
	demo d1(10);
	d1.show();
	getch();
}