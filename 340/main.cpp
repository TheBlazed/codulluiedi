#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;
    cin>>n;
    while(n>=10){
        s=0;
        while(n){
            s+=n%10;
            n/=10;
        }
        n=s;
    }
    cout<<n;
    return 0;
}
