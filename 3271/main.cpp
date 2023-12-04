#include <iostream>

using namespace std;

int main()
{
    int n,m,r,x,ma=0,nn,mm,n1,m1;
    cin>>x;
    for(int i=1;i<=x;++i){
        cin>>n>>m;
        nn=n;
        mm=m;
        while(n){
            r=m%n;
            m=n;
            n=r;
        }
        if(max(ma,m)==m){
            ma=m;
            n1=nn;
            m1=mm;
        }
    }
    cout<<n1<<' '<<m1;
    return 0;
}
