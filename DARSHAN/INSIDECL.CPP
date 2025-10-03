#include<iostream.h>
#include<conio.h>
class data
{
	int x,y;
	public:void assign(int a,int b)

{
	x=a;
	y=b;
}
public: void display()
{
	cout<<"value==x"<<x<<endl;
	cout<<"value==y"<<y<<endl;
};
int main()
{
	data d;
	clrscr();
	d.assign(10,20);
	d.display();
	getch();
	return 0;
}