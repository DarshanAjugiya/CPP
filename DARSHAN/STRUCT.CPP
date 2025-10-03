#include<stdio.h>
#include<conio.h>
struct s1{
	int num;
	char c;

	};

void main()
{
	struct s1 st;
	clrscr();
	st.num=122;
	st.c='F';
	printf("number = %d\n",st.num);
	printf("character = %c",st.c);
       getch();

}