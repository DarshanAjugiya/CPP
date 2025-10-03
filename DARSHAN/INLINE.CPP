#include<iostream.h>
#include<conio.h>
inline int square(int p)
{
	return p*p;
}
int main()
{
	int n;
	clrscr();
	cout<<"enter a number";
	cin>>n;
	cout<<"squer="<<square(n);
	getch();
	return 0;
}