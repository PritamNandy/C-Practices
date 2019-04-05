#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string str = "hello world";
    char letter[str.length()];
    strcpy(letter,str.c_str());
    int len = sizeof(letter);
    int count = 0;
    for(int i=0; i<len; i++)
    {
        if(((int)letter[i]>=65 && (int)letter[i]<=90) || ((int)letter[i]>=97 && (int)letter[i]<=122))
        {
            if(count == 0)
            {
                letter[i] = toupper(letter[i]);
                count++;
            }
            if(((int)letter[i+1] >= 65 && (int)letter[i+1]<=90) || ((int)letter[i+1]>=97 && (int)letter[i+1]<=122) == false)
            {
                letter[i] = toupper(letter[i]);
            }
        }
        else
        {
            count = 0;
        }
    }

    //strcpy(str,letter);
    cout << string(letter) << endl;

}
