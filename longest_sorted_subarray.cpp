#include <iostream>

using namespace std;

int main()
{
    int num[] = {1, 2, 1, 6, 7, 2, 9, 13, 17, 20, 22, 1, 4, 7, 8, 9, 0};
    int len = sizeof(num)/sizeof(*num);
    int first,last,temp = 0;
    int countMax = 0, count = 0;
    for(int i=0; i<len; i++)
    {
        if(i == (len-1))
        {
            if(num[i]>num[i-1])
            {
                count++;
                if(countMax<count) {
                    first = temp;
                    last = i;
                }
            }
        }
        else if(num[i]<num[i+1])
        {
            count++;
            if(temp==0)
            {
                temp = i;
                    //cout << temp;
            }
        }
        else
        {
            if(countMax<count) {
                countMax = count;
                first = temp;
                last = i;
                temp = 0;
                count = 0;
            }
        }
    }
    for(int i=first; i<=last; i++)
    {
        cout << num[i] << " ";
    }

}
