#include <iostream>
using namespace std;

void isPosNeg(int n) {
    if(n>=0) cout<<n<<" is positive"<<endl;
    else if(n<0) cout<<n<<" is odd"<<endl;
}

int main() {
    int n;
    cin>>n;
    isPosNeg(n);
    return 0;
}