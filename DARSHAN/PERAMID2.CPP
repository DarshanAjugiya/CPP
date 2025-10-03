#include<iostream.h>
#include<conio.h>
int main()
{
	int a,b;
	clrscr();
	for(a=1;a<=5;a++)
	{
		cout<<"1";
		for(b=2;b<=a;b++)
		{
			cout<<"*";
			if(a>2)
			{
				cout<<"3";
			}
			if(a==5)
			{
				cout<<"*";
			}

		}
		cout<<endl;
	}
	getch();
	return 0;

}