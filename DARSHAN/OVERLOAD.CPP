#include<iostream.h>
#include<conio.h>
class demo
{
	int a;
	public:demo(int x)
	{
		a=x;

	}
	demo(int x, int y)
	{
		a=x+y;
	}
	void show()
	{

		cout<<endl<<a;
	}


};
void main()
{
	clrscr();
	demo d(10);
	demo d1(20,34);
	d.show();
	d1.show();
	getch();
}