#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n,m=0,s=0,ct=0,c,cnt=1;
    cin>>n;
    while(n){
        c=n%10;
        m+=c;
        n/=10;
        ct++;
    }
    for(int i=1;i<=ct;i++){
        s=s*10+1;
    }
    for(int i=1;i<=ct-1;i++){
        cnt*=i;
    }
    cout<<s*cnt*m;
    return 0;
}