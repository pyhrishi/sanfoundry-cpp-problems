#include <iostream>
#include <cmath>
using namespace std;

void isAdamNum(int n);
int reverse(int n);

int reverse(int n) {
    int rev = 0;
    while(n>0){
        rev = rev*10 + n%10;
        n/=10;
    }
    return rev;
}

void isAdamNum(int n) {
    int temp = n;
    n = n*n;
    n = reverse(n);
    n = sqrt(n);
    n = reverse(n);
    if(n==temp) cout<<temp<<" is adam number"<<endl;
    else cout<<temp<<" is not adam number"<<endl;
}

int main() {
    int n;
    cin>>n;
    isAdamNum(n);
    return 0;
}