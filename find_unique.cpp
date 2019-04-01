#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string s = "Geeksforgeeks";
    char str[s.length()];
    strcpy(str,s.c_str());
    bool unique;
    int len = sizeof(str);
    for(int i=0;i<=len;i++) {
        unique = true;
        for(int j=len;j>=0;j--) {
            if(tolower(str[i])==tolower(str[j]) && i!=j)
            {
                unique = false;
                break;
            }
        }
        if(unique==true)
        {
            cout << str[i];
        }
    }
}
