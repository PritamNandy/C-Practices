#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double num = 1234.231;

    int before = 0, after = 0;

    double x = num;
    double temp = -1;

    while((int)temp != 0) {
        temp = x/10;
        if(temp!=0){
            x /= 10;
        }
        before++;
    }

    x = num;
    while(x != ceil(x)) {
        x = x*10;
        after++;
    }



    cout << "Before Decimal: " << before << endl;
    cout << "After Decimal: " << after << endl;


}

