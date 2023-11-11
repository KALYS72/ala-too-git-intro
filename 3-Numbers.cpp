#include <iostream>
using namespace std;

int main() {
    int a, odd=0, even=0;
    cin >> a;
    for (int i = 1; i <= a; i++) {
        int b;
        cin >> b;
        if (b % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    cout << "Odds: " << odd << endl << "Evens: " << even;
}