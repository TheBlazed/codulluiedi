#include <iostream>
using namespace std;
int main(){
    int n,c,p=1;
    bool ok=0;
    cin>>n;
    while(n){
        c=n%10;
        if(c%2!=0){
            p*=c;
            ok=1;
        }
        n/=10;
    }
    if(ok==0){
        cout<<-1;
    }
    else{
        cout<<p;
    }
    return 0;
}