#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a > 0 && a <= 1000 && b > 0 && b <= 1000) {
        double c = sqrt(a * a + b * b);
        cout << fixed << setprecision(1) << c;
    }

    return 0;
}