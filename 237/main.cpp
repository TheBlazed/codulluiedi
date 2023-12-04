#include <bits/stdc++.h>
#define N 105
using namespace std;
ifstream fin("sume.in");
ofstream fout("sume.out");
int a[N];
int main(){
    int n,i,s=0;
    fin>>n;
    for(i=1;i<=n;++i){
        fin>>a[i];
        s+=a[i];
    }
    for(i=n;i>=1;--i){
        fout<<s<<endl;
        s-=a[i];
    } 
    return 0;
}