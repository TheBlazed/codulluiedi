#include <iostream>
using namespace std;
int main(){
    unsigned long long n,x,c,m=10;
    cin>>n>>x;
    while(n){
        c=n%10;
        if(c<m && c>x){
            m=c;
        }
        n/=10;
    }
    if(m==10){
        cout<<-1;
    }
    else{
        cout<<m;
    }
    return 0;
}