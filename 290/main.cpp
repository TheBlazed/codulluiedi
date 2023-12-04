#include <bits/stdc++.h>
#define N 505
int a[N];
using namespace std;
int main()
{
    int n,i,j=1,x;
    bool ok=1;
    cin>>n;
    for(i=1;i<=n;++i){
        cin>>x;
        if(x%2==0) a[j++]=x;
    }
    for(i=2;i<j && ok==1;++i) if(a[i-1]>a[i]) ok=0;
    if(ok) cout<<"DA";
    else cout<<"NU";
    return 0;
}
