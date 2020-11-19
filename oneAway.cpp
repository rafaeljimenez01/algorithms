#include <iostream>

using namespace std;

/*Check if two strings are one or zero edits away
    Edits:
        insert a char
        remove a char
        replace a char

*/
bool oneAway(string str1, string str2){
    int l1 = str1.size();
    int l2 = str2.size();
    int i=0;
    int j=0;
    int changes = 0;
    while(i < l1 && j < l2){
        if(changes == 1)
            return false;
        if(str1[i] != str2[j]){
            if(l1>l2){
                i++;
            }
            else if(l2>l1){
                j++;
            }
            else{
                i++;
                j++;
            }
            changes++;
        }
        else{
            i++;
            j++;
        }
    }
    while(i< l1 || j < l2){
        changes++;
        if (i < l1)
            i++;
        else
            j++;        
    }
    return changes == 1;
}
int main(){
    string str1 = "pale";
    string str2 = "palet";
    cout << oneAway(str1,str2) << endl;
    return 0;
}
