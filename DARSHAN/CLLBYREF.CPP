#include<iostream.h>
#include<conio.h>
void swap (int *a,int *b)
{
	int temp=*b;
	*b = *a;
	*a=temp;

}
int main ()
{
	int x=3,y=4;
	clrscr();
	cout <<" value of x="<<x<<endl <<"value of y="<<y<<endl;
	swap(&x,&y);
	cout <<"value of x="<<x<<endl;
	cout <<"value of y="<<y<<endl;
	getch();
	return 0;
}