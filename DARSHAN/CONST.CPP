#include<iostream.h>
#include<conio.h>
class demo
{
	int a;
	public:
	 void data(int x)
	{
		a=x;

	}
	void fun() const;

};
void demo::fun()const
{
	int y=10;
	y=230;
	cout<<" data bember"<<a;
	cout<<endl<<y;
}
void main()
{
	clrscr();
	demo obj;
	obj.data(10);
	obj.fun();
	getch();

}