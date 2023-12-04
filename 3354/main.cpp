#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,nr=-1,ct,i,j,x,cx;
    cin>>n;
    for(i=1;i<=n;++i){
        cin>>x;
        cx=x; j=2; ct=0;
        while(x!=1 && ct!=2){
            if(x%j==0) ++ct;
            while(x%j==0) x/=j;
            ++j;
            if(j*j>x) j=x;
        }
        if(ct==1) nr=max(nr,cx);
    }
    if(nr==-1) cout<<"NU EXISTA";
    else cout<<nr;
    return 0;
}