#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main(){
    int n,i,s2,s3,c4,s5;
    s2=s3=c4=s5=0;
    cin>>n;
    for(i=1;i<=n;++i){
        cin>>a[i];
        if(a[i]%2==0) s2+=a[i];
        if(i%2==0) s3+=a[i];
        if(a[i]%10==0) ++c4;
        if(a[i]%3==0 && i%2) s5+=a[i];
    }
    for(i=n;i>=1;--i) cout<<a[i]<<' ';
    cout<<endl<<s2<<endl<<s3<<endl<<c4<<endl<<s5;
    return 0;
}