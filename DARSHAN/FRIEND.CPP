#include<iostream.h>
#include<conio.h>
class demo
{
	int a;
	int b;
	public: friend void sum_fun(demo);
	void add_data(int x1=0,int y1=0)
	{
		a=x1;
		b=y1;

	}
	void display()
	{
	cout<<" x=="<<a<<"\n";
		cout<<"y=="<<b<<"\n";

	}
};
void sum_fun(demo obj1)
{
	int p;
	p=obj1.a + obj1.b;
	cout<<" sum of 2 memeber using friend function:"<<p<<endl;
}
void main()
{
	clrscr();
	demo d1;
	d1.add_data(5,3);
	cout<<"demo1 \n";
	d1.display();
	sum_fun(d1);
	getch();

}
