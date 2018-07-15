#include <iostream>
#include <cstdlib>

using namespace std;

bool test(int, int);

int main()
{
    int n, pos;

    cout << "Enter a number : ";
    cin >> n;
    cout << "Enter bit position(1-16) to test : ";
    cin >> pos;

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
    // powers of 2 to be used as masks
    int masks[] = {
        0x1, 0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0x80, 0x100,
        0x200, 0x400, 0x800, 0x1000, 0x2000, 0x4000, 0x8000
    };

    if(num & masks[pos]) {
        return true;
    }
    else {
        return false;
    }
}