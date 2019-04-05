//Write a function to find minimum number that add to the negative elements to make them non-negative and subtract
//to the positive elements to make them non positive from given array.
//Input -> 4, 7, 11, -3, -6, 10, -12 ||| Output -> 12
// Input -> 2, 7, -7, -3, -6, 9, -1 ||| Output-> 9

#include <iostream>

using namespace std;

int main () {
    int num[] = {-12,4,5,6,8,3,-7,-8,-3,6};
    int len = sizeof(num)/sizeof(*num);
    for(int i=0;i<len;i++) {
        if(num[i]<0){
            num[i] = num[i]*-1;
        }
    }
    int max_num = num[0];

    for(int i=1;i<len;i++) {
        if(max_num<num[i])
            max_num = num[i];
    }

    cout << max_num;
}
