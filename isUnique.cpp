#include <iostream>
#include <unordered_map>
using namespace std;
//Checks for uniquees chars in a string
bool isUnique(string s){
    unordered_map<char,int> map;
    map[s[0]] = 0;

    for(int i=1;i<s.size();i++){
        if(map.find(s[i]) == map.end()){
            map[s[i]] = i;
        }
        else
            return false;
    }
    return true;


}
 
int main(){
    cout << isUnique("cc") << endl;

    return 0;
}