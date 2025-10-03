#include<iostream.h>
#include<conio.h>
class demo
{
	int a,b;
	public: demo (int x, int y)
	{
		a=x;
		b=y;
	}
	void show()
	{
		cout<<endl<<a<<endl<<b;
	}
	~demo()
	{
		cout<<"\n destructor";
	}
};
void main()
{
	clrscr();
	demo d(77,7);
	d.show();
	getch();
}