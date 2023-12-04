#include <iostream>
using namespace std;
int main(){
    int n,m=0,s=0,c;
    cin>>n;
    while(n){
        c=n%10;
        if(c>m){
            m=c;
            s+=c;
        }
        n/=10;
    }
    cout<<s;
    return 0;
}