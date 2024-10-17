#include <iostream>
using namespace std;

int main() {
    int N, K;

    cin >> N >> K;

    if (N > 0) {
        
        int apples_per_student = K / N;
      
        cout << apples_per_student << endl;
    } else {
        
        cout << 0 << endl;
    }

    return 0;
}
