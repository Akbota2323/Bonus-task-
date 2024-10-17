#include <iostream>
using namespace std;

int main() {
    
    unsigned long long number;

   
    cin >> number;

    
    int last_digit = number % 10;

   
    cout << last_digit << endl;

    return 0;
}
