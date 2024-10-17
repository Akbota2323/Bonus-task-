#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input); 
    size_t first = input.find('h');
    size_t last = input.rfind('h');

    string result = input.substr(0, first) + input.substr(last + 1);

    cout << result << endl;  

    return 0;
}
