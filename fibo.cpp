#include <iostream>
using namespace std;

void printFibo(int n) {
    int first = 0;
    int second = 1;
    cout<<first<<" ";
    for(int i=1; i<n; i++) {
        int temp = first;
        first = second;
        second = second + temp;
        cout<<second<<" ";
    }
    cout<<endl;
}

int main() {
    int n;
    cin>>n;
    printFibo(n);
    return 0;
}