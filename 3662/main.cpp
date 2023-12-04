#include <iostream>
using namespace std;
int main(){
    long long n,s=0,ss=0;
    cin>>n;
    while(n){
        s+=n%10;
        n/=10;
    }
    while(s){
        ss++;
        s/=10;
    }
    cout<<ss;
    return 0;
}