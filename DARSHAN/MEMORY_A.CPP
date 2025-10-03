#include<iostream.h>
#include<conio.h>
class student
{
	public:
	student()
	{
		cout<<"constructor called object created"<<endl;
	}
	~student()
	{
		cout<<"destructor called object created"<<endl;

	}
	void display()
	{
		cout<<"hello from my class"<<endl;
	}
};
int main()
{
	clrscr();
	//static memory allocation
	student obj1;
	obj1.display();

	//daynamic memory allocation
	student*obj2=new student;
	obj2->display();
	delete obj2;
	getch();
	return 0;
}