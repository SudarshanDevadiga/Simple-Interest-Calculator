#include <iostream>
using namespace std;
int main() {
    float principal, rate, time, SI;
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the rate of interest: ";
    cin >> rate;
    cout << "Enter the time period (in years): ";
    cin >> time;
    SI = (principal * rate * time) / 100;
    cout << "Simple Interest = " << SI << endl;
    return 0;
}