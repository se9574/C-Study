#include <iostream>
using namespace std;

int main()
{
    int star, remain;
    cin >> star;
    remain = star;
    while (1) {
        if (star > 0) {
            while (remain != 0) {
                cout << "*";
                remain -= 1;
            }
            cout << "\n";
            star -= 1;
            remain = star;
        }
        else {
            break;
        }

    }
}