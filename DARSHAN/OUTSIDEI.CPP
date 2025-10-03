#include<iostream.h>
#include<conio.h>
class demo
{
	public: int func(int n);
};
inline int demo::func(int n)
{
	return n+100;
}
int main()
{
	clrscr();
	demo d;
	cout<<"sum is=="<<d.func(100);
	getch();
	return 0;
}
