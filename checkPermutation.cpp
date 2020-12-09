#include <iostream>
#include <unordered_map>
using namespace std;
//Compares two strings and checks if they are permutations 
class solution{
    public:
        bool checkPermutation(string s,string s2){
            if (s == s2) return false;
            unordered_map<char,int> umap;
            for(int i=0;i<s.size();i++){
                umap[s[i]] = i;
            }
            for(int i=0; i<s2.size();i++){
                if(umap.find(s2[i]) == umap.end()){
                    return false;
                }
            }
            return true;
        }
};


int main(){
    solution sol;
    cout << sol.checkPermutation("hola","ohal") << endl;

    return 0;
}