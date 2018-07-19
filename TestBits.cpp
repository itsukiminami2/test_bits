/*  
        TestBits.cpp : A program to test whether certain bits are set or not. If a bit is '1', it is set.
	Author       : Mayank Kr
	Date	     : 01-03-2014
*/

#include <iostream>
#include <cstdlib>
#include <limits>

bool test(int, int);
int get_int();        // Integer input validation.

int main()
{
    using std::cin;
    using std::cout;

    int n, pos;

    cout << "Enter a number : ";
    n = get_int();
    cout << "Enter bit position(0-15) to test : ";
    pos = get_int();

    if(test(n, pos)) {
        cout << "Bit at position " << pos << " is set.\n\n";
    }
    else {
        cout << "Bit at position " << pos << " is not set.\n\n";
    }

    system("pause");
    return 0;
}

bool test(int num, int pos)
{
    // Powers of 2 which are to be used as masks.
    int masks[] = {
        0x1, 0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0x80, 0x100,
        0x200, 0x400, 0x800, 0x1000, 0x2000, 0x4000, 0x8000
    };

    return (num & masks[pos]);  // masks[pos] is the appropriate mask chosen based on the bit position specified by the user.
}

int get_int()
{
     using std::cin;
     using std::cout;
     using std::numeric_limits;
     using std::streamsize;

     int number;

     while(true) {
        if (!(cin >> number)) {
	    cin.clear();
	    cin.ignore(numeric_limits<streamsize>::max(), '\n');
	    cout << "Enter a valid number!\nEnter a number : ";
        }
	else {
	    break;
	}
    }

    return number;
}
