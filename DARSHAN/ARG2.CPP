#include<iostream.h>
#include<conio.h>
int main(int argc,char*argv[])
{
 clrscr();
 int i;
 cout<<"total argument"<<argc<<endl;
 cout<<" program name"<<argv[0]<<endl;
 cout<<"other argument";
 for(i=0;i<argc;i++)
 {
	cout<<argv[i]<<endl;

 }
 cout <<"total no. of argument"<<argc;
 getch();
 return 0;

}