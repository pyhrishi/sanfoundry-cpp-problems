#include <iostream>
using namespace std;
void isLeap(int n);

void isLeap(int n) {
    if(n%400==0 && n%100==0) cout<<n<<" is leap year"<<endl;
    else if(n%4==0 && n%100!=0) cout<<n<<" is leap year"<<endl;
    else cout<<n<<" is not leap year"<<endl;
}

int main() {
    int n;
    cin>>n;
    isLeap(n);
    return 0;
}