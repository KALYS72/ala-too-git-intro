#include <iostream>
using namespace std;

int main() {
    int a, b1, b2, b3, c1, c2, c3;
    cin >> a;
    b1 = a % 10;
    b2 = a / 10 % 10;
    b3 = a / 100 % 10;
    c1 = a / 1000 % 10;
    c2 = a / 10000 % 10;
    c3 = a / 100000;
    if ((b1 + b2 + b3) == (c1 + c2 + c3)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}