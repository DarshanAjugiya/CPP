#include<iostream.h>
#include<conio.h>
class type
{
	int n;
	public:type(int n)
	{
		this->n=n;

	}
	void show()
	{
		cout<<"basic to class"<<n;
	}

};
void main()
{
	clrscr();
	type t=10;
	t.show();
	getch();


}