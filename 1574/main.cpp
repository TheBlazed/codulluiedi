#include <iostream>

using namespace std;

int main()
{
    int n, d1, d2, m;
    long long s1=0, s2=0;
    cin>>n>>m;
    for(d1=1; d1*d1<n; d1++)
        if(n%d1==0) s1=s1+d1+n/d1;
    if(d1*d1==n) s1=s1+d1;
    s1-=n;
    
    for(d2=1; d2*d2<m; d2++)
        if(m%d2==0) s2=s2+d2+m/d2;
    if(d2*d2==m) s2=s2+d2;
    s2-=m;
    
    if(s2==n and s1==m) cout<<"PRIETENE";
    else cout<<"NU SUNT PRIETENE";
    return 0;
}