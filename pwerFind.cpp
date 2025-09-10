//POWER FINDING !!
//NAME: PRASHANT MISHRA

#include <iostream>
using namespace std;

double power(double n, double p) {
    int result = 1;
    for(int i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}

int main() {
    double n, p;
    cout << "Enter base (n): ";
    cin >> n;
    cout << "Enter exponent (p): ";
    cin >> p;

    double result = power(n, p);
    cout << n << " raised to the power " << p << " is: " << result << endl;

    return 0; 
}
