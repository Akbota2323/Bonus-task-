#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; 

    int number;
    bool hasZero = false; 
    for (int i = 0; i < N; i++) {
        cin >> number; 
        if (number == 0) { 
            hasZero = true;
            break; 
        }
    }

    if (hasZero) {
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl; 
    }

    return 0;
}
