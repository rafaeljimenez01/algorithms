#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

//Counts the number of repeated characters.
//aabccccaaa would become a2b1c4a3

string stringCompression(string str1){
    int count = 0;
    string compressed;
    for(int i = 0; i<str1.size() -1; i++){
        if(str1[i] == str1[i+1]){
             count++;
        }
        else
        {
            compressed = compressed + str1[i];
        }
        
    }

}
int main(){
    string str1 = "aabccccaaa";
    cout << stringCompression(str1) << endl;
    return 0;
}