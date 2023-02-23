#include <iostream>
using namespace std;

void isEvenOdd(int n) {
    if(n%2==0) cout<<n<<" is even"<<endl;
    else cout<<n<<" is odd"<<endl;
}

int main() {
    int n;
    cin>>n;
    isEvenOdd(n);
    return 0;
}