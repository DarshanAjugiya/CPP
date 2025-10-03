#include<iostream.h>
#include<conio.h>
class sum
{
	int a;
	int b;
	public: sum(int x, int y)
	{
		a=x;
		b=y;

	}
	sum(sum & s)
	{
		a=s.a;
		b=s.b;

	}
	void display()
	{
		cout<<a<<endl<<b;

	}
};
void main()
{
	clrscr();
	sum a(5,55);
	sum b(a);
	a.display();
	b.display();
	getch();

}