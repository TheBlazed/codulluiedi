#include <iostream>
#define N 505
using namespace std;
int a[N],n;
int main()
{
    int i;
    bool ok=1;
    cin>>n>>a[1];
    for(i=2;i<=n;++i){
        cin>>a[i];
        if(a[i]!=a[1]) ok=0;
    }
    if(ok) cout<<"DA";
    else cout<<"NU";

    return 0;
}
