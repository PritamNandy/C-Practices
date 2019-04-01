#include <iostream>
using namespace std;
int maximum(int num[],int len);
int minimum(int num[],int len);

int main()
{
    int num[] = {11,23,30,29,8,5,17,79,58,58};
    int len = sizeof(num)/sizeof(*num);
    int maxi = maximum(num,len-1);
    int mini = minimum(num,len-1);
    cout << "2nd Maximum Number is: "<< maxi;
    cout << "2nd Minimum Number is: "<< mini;
}

int maximum(int num[],int len)
{
    for(int i=0; i<=len; i++)
    {
        int count = 0, max = num[i];
        for(int j=1; j<=len; j++)
        {
            if(num[i]<num[j])
            {
                count++;
                if(count>1)
                    break;
            }

        }
        if(count==1)
        {
            max = num[i];
            return max;
        }
    }
}

int minimum(int num[],int len)
{
    for(int i=0; i<=len; i++)
    {
        int count = 0, mini = num[i];
        for(int j=1; j<=len; j++)
        {
            if(num[i]>num[j])
            {
                count++;
                if(count>1)
                    break;
            }

        }
        if(count==1)
        {
            mini = num[i];
            return mini;
        }
    }
}
