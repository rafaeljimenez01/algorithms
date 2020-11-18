#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> mergeSorted(vector<int> l1, vector<int> l2) {
    vector<int> sorted;
    int i = 0, j = 0, k = l1.size() * 2;
    while (i < l1.size() && j < l2.size()) {
        if (l1[i] < l2[j]) {
            sorted.push_back(l1[i++]);
        }
        else
        {
            sorted.push_back(l2[j++]);
        }
    }
    while (i < l1.size()) {
        sorted.push_back(l1[i++]);
    }
    while (j < l2.size()) {
        sorted.push_back(l2[j++]);
    }
    for (int i = 0; i < sorted.size(); i++) {
        cout << sorted[i] << ' ';
    }
    return sorted;

}
int main() {
    vector<int> l1 = { 3,5,10 };
    vector<int> l2 = { 4,12,15 };
    mergeSorted(l1, l2);



    return 0;
}