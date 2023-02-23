#include <iostream>
#include <cmath>
using namespace std;

int sumOfCubes(int);
bool isArmstrong(int);

bool isArmstrong(int n) {
    if(sumOfCubes(n)==n) return true;
    else return false;
}

int sumOfCubes(int n) {
    int sum = 0;
    while(n>0){
        sum = sum + pow((n%10),3);
        n/=10;
    }
    return sum;
}

int main() {
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) {
        if(isArmstrong(i)) cout<<i<<" ";
    }
    return 0;
}