#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double X, Y, Z;
    cin >> X >> Y >> Z; 

    int N;
    cin >> N; 

    double totalProteins = 0.0;
    double totalFats = 0.0;
    double totalCarbs = 0.0;

    for (int i = 0; i < N; ++i) {
        double A, B, C, Q;
        cin >> A >> B >> C >> Q;

        totalProteins += A * Q;
        totalFats += B * Q;
        totalCarbs += C * Q;
    }

    if (totalProteins >= X && totalFats >= Y && totalCarbs >= Z) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
