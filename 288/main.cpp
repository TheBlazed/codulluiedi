#include <iostream>
#define N 105
using namespace std;
int a[N],n;
int main()
{
    int i;
    bool ok=1;
    cin>>n;
    for(i=1;i<=n;++i){
        cin>>a[i];
        if(a[i]%2) ok=0;
    }
    if(ok) cout<<"DA";
    else cout<<"NU";

    return 0;
}
