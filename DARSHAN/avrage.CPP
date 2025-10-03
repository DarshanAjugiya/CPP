
#include <iostream>
using namespace std;
int main()
{

	int a, b, c;
	cout << "enter the mark of maths,science and english" << endl;
	cout << "enter maths mark:-";
	cin >> a;
	cout << "enter science mark:-";
	cin >> b;
	cout << "enter english mark:-";
	cin >> c;

	cout << "your total mark is:-" << a + b + c << " and" << endl
		<< "avarage of your marks is:- " << (a + b + c) / 3;
	return 0;
}