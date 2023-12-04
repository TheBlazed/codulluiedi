#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,i=2;
    cin>>n;
    while(n!=1){
        while(n%i==0){
            cout<<i<<' ';
            n/=i;
        }
        ++i;
        if(i*i>n) i=n;
    }
    return 0;
}