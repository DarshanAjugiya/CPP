#include<iostream.h>
#include<conio.h>
class demo
{
	int arr[5];
	public:void value();
	void show();
};
void demo::value()
{
	cout<<"enter arry value ";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
}
void demo::show()
{      		  cout<<"value of arry";
		for(int i=0;i<5;i++)
		{

			cout<<arr[i]<<endl;

		}

}
void main()
{
	clrscr();
	demo d;
	demo value();
	d.show();
	getch();
}
