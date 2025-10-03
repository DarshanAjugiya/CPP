#include<iostream.h>
#include<conio.h>
int add(int a,int b=3)
{
	return a+b;
}
int main()
{

	clrscr();
	cout<<"cll with one argument"<<add(10)<<endl;
	cout<<"cll with two arguent"<<add(10,5);
	getch();
	return 0;
}