#include<iostream.h>
#include<conio.h>
int sum (int a)
{
 return a;
}
int sum (int a,int b)
{
	return a,b;


}
int sum(int a,int b,int c)
{
	a+b+c;

}
int main()
{
	clrscr();
	cout<<"function1"<<sum(10)<<endl;
	cout<<"function2"<<sum(10,20)<<endl;
	cout<<"function3"<<sum(10,20,3)<<endl;
	getch();
	return 0;

}
