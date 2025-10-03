#include<iostream.h>
#include<conio.h>

class a {
    int x;

protected:
    int y;

public:
    int z;

    void pr() {
        cout << "\nx = " << x;
    }

    a() {
        x = 10;
    }
};

class b : public a {
public:
    void show() {
        pr();              // Calling base class private printer
        cout << "\ny = " << y;
        cout << "\nz = " << z;
    }
};

class c : public b {
public:
    void assign() {
        y = 20;  // from protected
        z = 30;  // from public
    }
};

void main() {
    clrscr();
    c O_c;
    O_c.assign();
    O_c.show();
    getch();
}
