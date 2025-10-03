#include<iostream.h>
#include<conio.h>
class data
{
	void fun()
	{
		cout<<" hello function"<<endl;
	}
	public: void display()
	{
		fun();
	}
};
void main()
{
	clrscr();
	data d;
	d.display();
	getch();
}