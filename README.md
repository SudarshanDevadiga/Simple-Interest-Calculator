# Simple Interest Calculator

This is a simple C++ program to calculate the simple interest based on the principal amount, rate of interest, and time period provided by the user.

## How it works

1. The program prompts the user to enter the principal amount.
2. The program prompts the user to enter the rate of interest.
3. The program prompts the user to enter the time period (in years).
4. The program calculates the simple interest using the formula:
   \[
   \text{Simple Interest} = \frac{\text{Principal} \times \text{Rate} \times \text{Time}}{100}
   \]
5. The program outputs the calculated simple interest.

## Code

```cpp
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
