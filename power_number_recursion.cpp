// using recursion find the 4 power of 10 or 10^4 = 10000
#include <iostream>

using namespace std;
int recursion(int base, int power);

int main() {
    int base, power;
    cout << "Enter The Base: ";
    cin >> base;
    cout << "Enter The Power: ";
    cin >> power;
    int result = recursion(base,power);
    cout << "The result of " << base <<"^" << power << " is " << result << endl;
}

int recursion(int base, int power) {
    if(power==1)
        return base;
    else
        return recursion(base,power-1)*base;
}
