#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; 

    int sum = 0; 
    int number;

    for (int i = 0; i < N; i++) {
        cin >> number;
        sum += number; 
    }

    cout << sum << endl;

    return 0;
}
