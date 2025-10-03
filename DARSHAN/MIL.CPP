#include<iostream.h>
#include<conio.h>
class demo
{
	int a,b;
	public: demo(int x, int y):a(x),b(y)
	{

	}
	void show()
	{
		cout<<endl<<a<<endl<<b;
	}

};
void main()
{
	clrscr();
	demo d(10,20);
	d.show();
	getch();

}