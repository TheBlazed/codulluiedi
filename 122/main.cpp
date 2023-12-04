#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,ca=0,cb=0,aa,bb;
    cin>>a>>b;
    aa=a;
    bb=b;
    while(aa){
        if(aa%2==1) ca++;
        aa/=2;
    }
    while(bb){
        if(bb%2==1) cb++;
        bb/=2;
    }
    if(ca>cb) cout<<a;
    else if(ca<cb) cout<<b;
    else cout<<min(a,b);
    return 0;
}
