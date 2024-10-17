#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int apples_per_student = (N > 0) ? (K / N) : 0;

    
    cout << apples_per_student << endl;

    return 0;
}
