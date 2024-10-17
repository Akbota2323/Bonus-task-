#include <iostream>
using namespace std;

int main() {
    int v, t;
    const int MKAD_LENGTH = 109;

    cin >> v >> t;

    
    int distance = v * t;

    
    int final_position = distance % MKAD_LENGTH;

    
    if (final_position < 0) {
        final_position += MKAD_LENGTH;
    }

    cout << final_position << endl;

    return 0;
}
