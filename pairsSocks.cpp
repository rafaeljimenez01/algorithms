#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


int sockMerchant(int n, vector<int>& ar) {
    unordered_map<int,int> pairs; // pairs<value, repetitions>
    for(int i =0; i < ar.size();i++){
        pairs[ar[i]]++;
    }

    int count = 0;
    for(auto& itr :pairs){
        if(itr.second >= 2){
            count = count + itr.second /2;
        }
    }
    return count;
}

int main(){
    vector<int> v1 ={4, 5, 5, 5, 6, 6, 4, 1, 4, 4, 3, 6, 6, 3, 6, 1, 4, 5, 5, 5};
    cout << sockMerchant(20,v1);

}