#include <bits/stdc++.h>
#define N 1005
using namespace std;
int a[N];
int main()
{
    int n,m,i,x,j=0;
    bool ord=0;
    cin>>n;
    for(i=1; i<=n; ++i)
    {
        cin>>x;
        if(x%10==0) a[++j]=x;
    }
    if(j)
    {
        m=j;
        while(!ord)
        {
            ord=1;
            for(i=1; i<j; ++i)
            {
                if(a[i]<a[i+1])
                {
                    swap(a[i],a[i+1]);
                    ord=0;
                }
            }
            --j;
        }
        for(i=1; i<=m; ++i) cout<<a[i]<<' ';
    }
    else cout<<"NU EXISTA";
    return 0;
}
