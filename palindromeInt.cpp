#include <cmath>
#include <iostream>

using namespace std;

bool solve(int num) {
    int newNumber = 0;
    int value = num;
    int module = 1;
    if(num < 10)
        return true;
    while(num > 0){
        newNumber = newNumber*10 + num % 10;
        num = num / 10;
        module++;
    }
    return (newNumber == value);
}

int main(){
    cout << solve(121);

    return 0;
}