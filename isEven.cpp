#include <iostream>
using namespace std;

void isEven(int n) {
    if(n%2==0) cout<<n<<" is even"<<endl;
    else cout<<n<<" is not even"<<endl;
}

int main() {
    int n;
    cin>>n;
    isEven(n);
    return 0;
}