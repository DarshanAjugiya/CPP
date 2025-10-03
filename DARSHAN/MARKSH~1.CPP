#include<iostream.h>
#include<conio.h>
int main()
{   clrscr();
    int mark;
    cout<<"entet your mark between 0-100 : ";
    cin>>mark;

    if(mark>=90 && mark<=100)
    {
	cout<<"congratulation you get A+ grade"<<endl;
    }
    else if(mark>=75 && mark<=89)
    {
	cout<<"greate,you get A grade"<<endl;
    }
    else if(mark>=60 && mark<=74)
    {
	cout<<"good,you get B grade"<<endl;
    }
    else if(mark >=40 && mark<=59)
    {
	cout<<"you get c grade"<<endl;
    }
    else if(mark<=40)
    {
	cout<<"you are fail please try again"<<endl;
    }
    else
    {
	cout<<"please enter sutaible mark";
    }
    getch();
    return 0;
}