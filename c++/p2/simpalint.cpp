#include <iostream>
using namespace std;

int main() {
    double principal, rate, time, interest;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter interest rate (in %): ";
    cin >> rate;
    cout << "Enter time period (in years): ";
    cin >> time;
    interest = (principal * rate * time) / 100;
    cout << "Simple interest = " << interest << endl;
    return 0;
}
