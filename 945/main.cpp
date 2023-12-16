#include <bits/stdc++.h>
#define N 100000000
using namespace std;
int main(){
    int n,b,c,a[100];
    long long n10=0,p=1;
    cin>>n>>b>>c;
    while(n){
        n10+=p*(n%10);
        p*=b;
        n/=10;
    }
    int k=0;
    while(n10){
        a[++k]=n10%c;
        n10/=c;
        }
    for(int i=k;i>=1;--i) cout<<a[i];
    return 0;
}
