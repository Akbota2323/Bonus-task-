#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double x, y;
    
    cin >> x >> y;

    int day = 0; 
    double total_distance = 0; 
    double daily_distance = x; 
    while (total_distance < y) {
        day++;
        total_distance += daily_distance; 
        daily_distance *= 1.7;
    }

    cout << day << endl; 
    return 0;
}
