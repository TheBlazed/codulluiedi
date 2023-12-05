#include <iostream>
using namespace std;
int main() {
    int n,c1,c2;
    cin>>n;
    c1=n%10;
    c2=n/10%10;
    if(c1!=0 || c2!=0){
        n=n+100-n%100;
    }
    cout<<n;
}