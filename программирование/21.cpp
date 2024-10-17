#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    size_t first = input.find('f');
    
    size_t last = input.rfind('f');

    if (first != string::npos) {  
        if (first == last) { 
            cout << first << endl; 
        } else {  
            cout << first << " " << last << endl; 
        }
    }

    return 0;
}
