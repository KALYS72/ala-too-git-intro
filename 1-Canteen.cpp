#include <iostream>
using namespace std;

int main() {
    int a, b, c, total, fin_s, fin_t;
    cin >> a >> b >> c;
    total = (a*100 + b) * c;
    fin_s = total / 100;
    fin_t = total % 100;
    cout << fin_s << " som  and " << fin_t << " tyiyn";
}