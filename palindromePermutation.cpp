#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
//106 121 134 136

//tact coa

//         taco cat  
//backward:taco cat 
//even number of each char(uneven length only one letter to occurr odd number of times)

bool palindromePermutation(string& str){
    unordered_map<char,int> umap;
    //remove all spaces to make algo easier 
    int noSpaces = 0;
    for(int i=0;i < str.size();i++){
        if(str[i] != ' ')
            str[noSpaces++] = str[i];
    }
    str[noSpaces] = '\0';

    for(int i=0; str[i]; i++){
        umap[str[i]]++;
    }
    int count =0;
    for(auto& itr: umap){
        if(itr.second % 2 != 0)
            count++;
    }
    if(count <=1)
        return true;
    else
        return false;
    
};

int main(){
    string str = "cec            arar";
    cout << palindromePermutation(str) << endl;




    return 0;
}