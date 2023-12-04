#include <iostream>
#define N 505
using namespace std;
int a[N],n;
int main()
{
    int i,j;
    bool ok=1;
    cin>>n;
    for(i=1;i<=n;++i){
        cin>>a[i];
    }
    for(i=1;i<n && ok;++i)
        for(j=i+1;j<=n && ok;++j) if(a[i]==a[j]) ok=0;
    if(ok) cout<<"DA";
    else cout<<"NU";
    return 0;
}
