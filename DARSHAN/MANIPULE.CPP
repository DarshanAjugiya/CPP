#include<iostream.h>
#include<conio.h>
#include<string.h>

class op_cls {
public:
    char s1[40], s2[20];  // increased s1 size to hold concatenated string

    op_cls() {}

    op_cls(char x[], char y[]) {
        strcpy(s1, x);
        strcpy(s2, y);
    }

    void show() {
        cout << "\nString concatenation: " << s1 << endl;
    }

    void operator+() {
        strcat(s1, s2);
    }
};

void main() {
    clrscr();
    op_cls obj1("hello", "bca");
    +obj1;
    obj1.show();
    getch();
}
