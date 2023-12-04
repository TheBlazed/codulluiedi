#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,r,i;
    cin>>n>>a;
    for(i=2;i<=n;++i){
        cin>>b;
        while(b){
            r=a%b;
            a=b;
            b=r;
        }
    }
    cout<<a;
    return 0;
}