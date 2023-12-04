#include <bits/stdc++.h>
#define N 1005
int a[N];
using namespace std;
int main()
{
    int n,i;
    bool s1,s2,s3,s4,s5,s6;
    s1=s2=s3=s4=s5=s6=1;
    cin>>n;
    for(i=1;i<=n;++i) cin>>a[i];
    for(i=1;i<n;++i){
        if(a[i]!=a[i+1]) s1=0;
        if(a[i]==a[i+1]) s2=s4=0;
        if(a[i]>a[i+1]) s3=0;
        if(a[i]<a[i+1]) s5=0;
    }
    if(s1) cout<<"sir constant";
    else if(s2 && s3) cout<<"sir strict crescator";
    else if(s3) cout<<"sir crescator";
    else if(s4 && s5) cout<<"sir strict descrescator";
    else if(s5) cout<<"sir descrescator";
    else cout<<"sir neordonat";
    return 0;
}
