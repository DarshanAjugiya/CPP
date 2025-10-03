#include<iostream.h>
#include<conio.h>
class outer
{
	public:void out()
       {

	 cout<<"this is outer class"<<endl;

       }
       public:class inner
       {
		public:void inn()
		{
			cout<<"this is a inner class"<<endl;
		}
       };
};
int main()
{
	clrscr();
	outer o;
	outer:inner i;
	i.inn();
	o.out();
	getch();
	return 0;

}
