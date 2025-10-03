#include<iostream.h>
#include<conio.h>

class squre {
    private:
        int a;

    protected:
        int y;

    public:
        int c;

        squre() {
            a = 30;
        }

        void show() {
            cout << "\na == " << a;
        }
};

class star : public squre {
    public:
        void assign() {
            y = 90;
            c = 50;
        }

        void display1() {
            cout << "y == " << y << "  c == " << c;
            show();  // Accessing base class function
        }
};

void main() {
    clrscr();
    star s;
    s.assign();
    s.display1();
    getch();
}
