#include <iostream>

using namespace std;
int factorial (int number);

int main() {
    int number = 10;
    int fact = factorial(number);
    cout << number << "'s Factorial is: " << fact;

}

int factorial (int number) {
    while(number != 0) {
        if(number == 1)
            return 1;
        if(number>1)
        {
            return number*factorial(number-1);
        }
    }
}
