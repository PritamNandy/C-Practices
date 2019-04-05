#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    char letter[str.length()];
    strcpy(letter,str.c_str());
    int len = sizeof(letter);
    int vowel=0,consonant=0;
    for(int i=0; i<len; i++)
    {
        if(((int)letter[i]>=65 && (int)letter[i]<=90) || ((int)letter[i]>=97 && (int)letter[i]<=122))
        {
            if(tolower(letter[i])=='a' || tolower(letter[i])=='e' || tolower(letter[i])=='i' || tolower(letter[i])=='o' || tolower(letter[i])=='u')
            {
                vowel++;
            }
            else
                consonant++;
        }
    }

    cout << "Number of Vowel: " << vowel << endl;
    cout << "Number of Consonant: " << consonant << endl;


}
