#include <iostream>
using namespace std;

int main() {
    
    unsigned long long number;

    cin >> number;

    int tens = (number / 10) % 10;

    cout << tens << endl;

    return 0;
}
