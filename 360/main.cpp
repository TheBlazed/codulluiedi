#include <iostream>
using namespace std;
int main(){
    int n,c,nn=0,p=1,cc;
    bool ok=0;
    cin>>n>>cc;
    while(n){
        c=n%10;
        n/=10;
        if(c!=cc){
            nn+=c*p;
            ok=1;
            p*=10;
        }
    }
    if(ok==0)
        cout<<-1;
    else
        cout<<nn;
    return 0;
}