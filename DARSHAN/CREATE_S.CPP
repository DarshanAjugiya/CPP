#include<iostream.h>
#include<conio.h>
struct stud
{
	int rollno;
	char name[50];
	float marks;

};
int main()
{
	stud s1;
	cout<<"enter roll number";
	cin>>s1.rollno;

	cout<<"enter name";
	cin>>s1.name;

	cout<<"enter marks";
	cin>>s1.marks;


	cout<<"\n studen details..\n";
	cout<<"roll no"<<s1.rollno<<endl;
	cout<<"name "<<s1.name<<endl;
	cout<<"marks"<<s1.marks<<endl;
	getch();

	return 0;




}