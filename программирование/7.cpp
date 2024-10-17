#include <iostream>
using namespace std;

int main() {
   
    int number;

   
    cin >> number;

    
    if (number >= 10 && number <= 99) {
       
        int tens = number / 10;

        
        cout << tens << endl;
    } else {
        cout  << endl;
    }

    return 0;
}
