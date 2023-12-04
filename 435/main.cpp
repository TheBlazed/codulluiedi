#include <bits/stdc++.h>
using namespace std;
int a[10005];
int b[10005];
int main(){
    long long n,m,i=2,j=0,k=0;
    cin>>n>>m;
    while(n!=1){
        if(n%i==0) a[++j]=i;
        while(n%i==0) n/=i;
        ++i;
        if(i*i>n) i=n;
    }
    i=2;
    while(m!=1){
        if(m%i==0) b[++k]=i;
        while(m%i==0) m/=i;
        ++i;
        if(i*i>m) i=m;
    }
    if(j!=k){
        cout<<"NU";
        return 0;
    }
    else for(i=1;i<=j;++i){
        if(a[i]!=b[i]){
            cout<<"NU";
            return 0;
        }
    }
    cout<<"DA"; 
    return 0;
}