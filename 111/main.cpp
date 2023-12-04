#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,cx,ct,mct=0,nr,i,j;
    cin>>n;
    for(i=1;i<=n;++i){
        cin>>x;
        j=2; cx=x; ct=0;
        while(x!=1){
            if(x%j==0) ++ct;
            while(x%j==0){
                x/=j;
            }
            ++j;
            if(j*j>x) j=x;
        }
        if(mct<ct){
            mct=ct;
            nr=cx;
        }
        else if(ct==mct) nr=min(nr,cx);
    }
    cout<<nr;
    return 0;
}