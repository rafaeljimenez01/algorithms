#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
int solve(vector<int>& nums) {
    unordered_map<int,int> umap;
    for(int i=0; i < nums.size(); i++){
        umap[i]++;
    }
    int max =0;
    for(auto& v : umap){
        if(v.second > max){
            max = v.second;
        }
    }
    return max;
}
int main(){
    vector<int> nums = {1,4,17,1,7,1,1};
    cout << solve(nums) << endl;

    return 0;
}