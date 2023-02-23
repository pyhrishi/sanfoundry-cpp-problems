#include <iostream>
using namespace std;

int sumOfCubes(int n) {
    int sum = 0;
    while(n>0){
        sum = sum + (n%10)*(n%10)*(n%10);
        n/=10;
    }
    return sum;
}

int main() {
    int n;
    cin>>n;
    int res = sumOfCubes(n);
    string result = res==n ? "armstrong" : "not armstrong";
    cout<<result<<endl;
    return 0;
}