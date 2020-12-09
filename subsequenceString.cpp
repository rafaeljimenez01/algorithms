/*
s1 = "oslas"

s2 = "loslakers"
      -....---.
      
      


*/
#include <iostream>
#include <string>
using namespace std;
bool solve(string s1, string s2) {
    int l1 = s1.size();
    int l2 = s2.size();
    
    int i=0; int j = 0;
    
    int confirmed = 0;
    
    if(l1>l2){
        return false;
    }
    while(i < l1 || j < l2){
        if(s1[i] == s2[j]){
            i++;
            j++;
            confirmed++;
        }
        else{
            j++;
        }
    }
    return confirmed == l1;
    
}

int main(){
    string s1 = "bee";
    string s2 = "hive";
    cout << solve(s1,s2) << endl;


    return 0;
}
