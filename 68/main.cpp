#include <iostream>
using namespace std;
int main(){
    int n,c,m=0;
    cin>>n;
    while(n){
        c=n%10;
        if(c>m){
            m=c;
        }
        n/=10;
    }
    cout<<m;
    return 0;
}