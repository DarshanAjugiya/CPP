#include<iostream.h>
#include<conio.h>
class myclass
{
	public:
	void myfun();

};
void myclass::myfun()
{

	cout<<"hello from my function" <<endl;
}
int main()
{

	clrscr();
	myclass obj;
	obj.myfun();
	getch();
	return 0;
}