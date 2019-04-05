//extra space delete
#include <iostream>
#include <string.h>

using namespace std;

int main() {
    string str = "  Everybody     loves him.";
    char letter[str.length()];
    strcpy(letter,str.c_str());
    int len = sizeof(letter);
    int count=0;
    char letter2[len];

    for(int i=0;i<len;i++) {
        if(((int)letter[i]>=65 && (int)letter[i]<=90) || ((int)letter[i]>=97 && (int)letter[i]<=122)) {
                letter2[count] = letter[i];
                count++;
        }
        else if((int)letter[i]==32){
            if(count!=0){
              if((int)letter[i-1]!=32){
                    letter2[count] = letter[i];
                    count++;
              }

            }
        }
        else {
            letter2[count] = letter[i];
            count++;
        }

    }

    for(int i=0;i<count;i++) {
        cout << letter2[i];
    }



}
