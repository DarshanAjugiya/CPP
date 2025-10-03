#include<iostream.h>
#include<conio.h>
void fun()
{
	cout<<"this is udf"<<endl;
	class demo
	{
	      public : void cls_fun()
	      {
		cout<<"local class method";
	      }
	};
	demo d;
	d.cls_fun();

}
void main()
{
	clrscr();
	fun();
	getch();
}