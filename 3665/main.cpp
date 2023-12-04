#include <iostream>
using namespace std;
int main(){
    long long n;
    int c,m=-1;
    cin>>n;
    if(n==0){
        cout<<0;
        return 0;
    }
    while(n){
        c=n%10;
        if(c>m && c%2==0){
            m=c;
        }
        n/=10;
    }
    if(m==-1){
        cout<<10;
    }
    else{
        cout<<m;
    }
    return 0;
}