#include<iostream.h>
#include<conio.h>
class emp
{
	private:
		int a, b, c;

	public:
		int d, e;

		void setdata(int a1, int b1, int c1);
		void getdata();
};

// Defining setdata outside class
void emp::setdata(int a1, int b1, int c1) {
    a = a1;
    b = b1;
    c = c1;
}

// Defining getdata outside class
void emp::getdata() {
    cout << "The value of a = " << a << endl;
    cout << "The value of b = " << b << endl;
    cout << "The value of c = " << c << endl;
    cout << "The value of d = " << d << endl;
    cout << "The value of e = " << e << endl;
}

int main()
{
	clrscr();
    emp e1;
    e1.d = 4;
    e1.e = 5;

    e1.setdata(1, 2, 3);
    e1.getdata();
    getch();
    return 0;
}
