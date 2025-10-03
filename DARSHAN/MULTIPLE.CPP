#include<iostream.h>
#include<conio.h>
int main()
{
	int n,i;
	clrscr();
	cout<<"enter how many value" ;
	cin>>n;

	int arr[5];
	cout<<"enter"<<n<<"value";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"you entered";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	getch();
	return 0;
}
