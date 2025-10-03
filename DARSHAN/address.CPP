#include<iostream.h>
#include<conio.h>
int main()
{
	int a=4;
	int *b=&a;
	clrscr();
	cout<<"the addres a"<<&b<<endl;
	cout << "the addres b"<<&a<<endl;
	cout <<" the value at adress b"<<*b;
	getch();
	return 0;

}