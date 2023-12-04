#include <iostream>
#define N 105
using namespace std;
bool prim(int n){
    if(n<2) return 0;
    if(n==2 || n==3) return 1;
    if(n%2==0||n%3==0) return 0;
    for(int i=5;i*i<=n;i+=6)
        if(n%i==0||n%(i+2)==0) return 0;
    return 1;
}
int a[N],n;
int main()
{
    int i;
    bool ok=0;
    cin>>n;
    for(i=1;i<=n;++i){
        cin>>a[i];
        if(prim(a[i])) ok=1;
    }
    if(ok) cout<<"DA";
    else cout<<"NU";

    return 0;
}

