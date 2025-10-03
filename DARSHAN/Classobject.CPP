#include<iostream.h>
#include<conio.h>
  class emp{
  private : int a,b,c;
  public : int d,e;
  void setdata (int a1, int b1,int c1);
  void getdata()
  clrscr();
  {
  cout <<"the value of a=="<<a<<endl;
  cout <<"the value of b=="<<b<<endl;
  cout <<"the value of c=="<<c<<endl;
  cout <<"the value of d=="<<d<<endl;
  cout <<"the value of e=="<<e<<endl;
  }
};
void emp::setdata(int a1,int b1,int c1)
{
	a=a1;
	b=b1;
	c=c1;

}
int main()
{
	emp e1;
	e1.d=4;
	e1.e=5;
	e1.setdata(1,2,3);
	e1.getdata ();
	return 0;

}






