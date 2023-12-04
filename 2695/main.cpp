#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>x;
        if(int(cbrt(x))*int(cbrt(x))*int(cbrt(x))==x){
            cout<<"DA"<<endl;
        }
        else cout<<"NU"<<endl;
    }
    return 0;
}