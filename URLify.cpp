#include <iostream>
using namespace std;
const int MAX = 100;

void URLify(char s[]){
    int spaces = 0;
    int i;
    for(i=0; s[i]; i++) {
        if(s[i]== ' ')
            spaces++;
    }   

    while(s[i-1] == ' '){ //Count spaces at the end of the string 
        spaces--;
        i--;
    }

    int length = i + spaces*2 +1;

    int index = length -1;

    s[index--] = '\0'; //string termination

    for(int j=i-1; j >= 0; j--){
        if(s[j] == ' '){
            s[index] = '0';
            s[index - 1] = '2';
            s[index - 2] = '%';
            index = index -3;
        }
        else{
            s[index] = s[j];
            index--;
        }
    }
    for(int i=0; i < length; i++){
        cout << s[i];
    }
};
int main(){
    char str[MAX] = "Mr John Smith    ";
    URLify(str);



    return 0;
}