#include<iostream.h>
#include<conio.h>
class stud
{
	int roll;
	char name[20];
	public:void get_data();
}
	cout<<"enter your roll number"<<endl;
	cin>>roll;
	cout<<"enter your name"<<endl;
	cin>>name;
	public:void show_data()
	{
			   cout << "roll umber is:" << roll << endl;
			   cout << "Name is:" <<name << endl;
	}
};
int main()
{
	std ob[2];
	for (int i = 0; i < 2; i++)
	{
		ob[i].get_data();
	}
	for (int j = 0; j < 2; j++)
	{
		ob[j].show_data();

	}
	getch();
	return 0;
}
