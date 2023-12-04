#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,r,p;
    cin>>a>>b;
    p=a*b;
    while(b){
        r=a%b;
        a=b;
        b=r;
    }
    cout<<p/(a*a)<<' '<<a;
    return 0;
}