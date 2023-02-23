#include <iostream>
using namespace std;

void isPerfect(int n) {
    int sum = 0;
    for(int i = 1; i<=n/2; i++) {
        if(n%i==0) {
            sum+=i;
        }
    }
    if(sum==n) cout<<n<<" is perfect"<<endl;
    else cout<<n<<" is not perfect"<<endl;
}

int main() {
    int n;
    cin>>n;
    isPerfect(n);
    return 0;
}