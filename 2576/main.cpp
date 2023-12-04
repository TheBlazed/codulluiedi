#include <bits/stdc++.h>
#define N 1000005
using namespace std;
bitset<N> cr;
int main()
{
    int n,i,x,ct=0,j;
    for(i=2;i*i<=N+1;++i){
        if(cr[i]==0)
            for(j=2;i*j<=N+1;++j)
                cr[i*j]=1;
    }

    cin>>n;
    for(i=2;i<=n;++i){
        if(!cr[i]) cout<<i<<' ';
    }
    return 0;
}
