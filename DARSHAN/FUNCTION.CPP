#include<iostream.h>
#include<conio.h>
int add(int a,int b)
{
	return a+b;
}
double add(double a,double b)
{
	return a+b;
}
int main()
{

	clrscr();
	cout<<"sum of integer "<<add(5,10)<<endl;
	cout<<"sum of double " <<add(2.5,3.7);
	getch();
	return 0;
}