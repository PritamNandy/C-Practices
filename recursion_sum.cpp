#include <iostream>

using namespace std;
int recurSum(int number[], int len);

int main() {
    int num[] = {12,14,15,16};
    int len = sizeof(num)/sizeof(*num);
    cout << num[1];
    int sum = recurSum(num,len-1);
    cout << sum;

}

int recurSum(int num[],int len) {
        if(len==0)
        {
            return num[0];
        }
        else {
            return num[len]+recurSum(num,len-1);
        }
}
