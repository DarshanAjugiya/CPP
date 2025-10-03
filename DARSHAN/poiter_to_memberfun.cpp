#include<iostream.h>
 #include<conio.h>
 class demo
 {
 public :
 void fun(int a)
 {
 cout<<"a : "<<a;
 }
 };
 void main()
 {
 clrscr();
 demo obj;
 //::*
 void 
(demo::*ptr_var_fun)(int)=
 &demo::fun;//int is parameter
 //demo is class  ptr_var is 
variable for fun function
 //we assign a value of ptr_var
 from fun data member
 //to call member function by 
using *variable ptr_var_fun
 (obj.*ptr_var_fun)(23);//it 
is similar to obj.fun(23);
 //it call function fun with value 
of parameter a is 23
 getch();
 }
