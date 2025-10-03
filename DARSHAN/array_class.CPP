#include<iostream.h>
#include<conio.h>
class data
{
	int arr[5];
	public:
	void value();
	void show();

};
void data::value()
{
	cout<<"enter value = \n" ;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];

	}

}
void data::show()
{        cout<<"show value is = ";
	for(int i=0;i<5;i++)
	{
		cout<<endl<<arr[i];

	}

}

int main()
{
	clrscr();
	data d;
	d.value();
	d.show();
	getch();

}
