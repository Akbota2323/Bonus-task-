#include <iostream>
using namespace std;

int main() {
    int correct_answer, student_answer;

    cin >> correct_answer >> student_answer;

    if (correct_answer == student_answer) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
