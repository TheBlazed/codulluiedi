#include <iostream>
#define N 505
using namespace std;
int a[N],n;
int main()
{
    int i,j,aux;
    cin>>n;
    for(i=1;i<=n;++i) cin>>a[i];
    for(i=1;i<=n;++i){
        for(j=1;j<=n;++j)cout<<a[j]<<' ';
        cout<<endl;
        aux=a[1];
        for(j=1;j<n;++j) a[j]=a[j+1];
        a[n]=aux;
    }
    return 0;
}
