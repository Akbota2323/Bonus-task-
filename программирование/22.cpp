#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input); 

    size_t first = input.find('f'); 
    size_t second = string::npos;  

    if (first != string::npos) {  
      
        second = input.find('f', first + 1);
    }

    
    if (first == string::npos) {
        cout << -2 << endl; 
    } else if (second == string::npos) {
        cout << -1 << endl;  
    } else {
        cout << second << endl;
    }

    return 0;
}
