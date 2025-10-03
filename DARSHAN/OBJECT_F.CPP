#include<iostream.h>
#include<conio.h>
class demo_cls
{
	int a;
	public:void data(int);
	void sum(demo_cls,demo_cls);

};
void demo_cls::sum(demo_cls a_obj1,demo_cls a_obj2)
{
	cout<<" sum of 2 object is :"<<a_obj1.a + a_obj2.a;


}
void demo_cls::data(int x)
{
	a=x;
}
void main()
{
	clrscr();
	demo_cls obj1,obj2,obj3;
	obj1.data(10);
	obj2.data(20);
	obj3.sum(obj1,obj2);
	getch();

}