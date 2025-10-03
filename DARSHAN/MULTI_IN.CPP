#include<iostream.h>
#include<conio.h>
class a
{
	protected : int x;
	public: int y;


};
class b
{
	protected: int z;

};
class c: public a, public b
{

	public: void show()
	{
		cout<<"\n\n class \n";
		cout<<"\n x"<<x<<"\n y"<<y<<"\n z"<<z;
	}
	void assign()
	{
		x=10;
		y=20;
		z=30;

	}
};
void main()
{
	clrscr();
	c o_c;
	o_c.assign();
	o_c.show();
	getch();
}
