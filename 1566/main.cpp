#include <iostream>
using namespace std;
int main(){
    int n,c1,c2,p=1,nn=0;
    cin>>n;
    while(n){
        c1=n%10;
        c2=(n/10)%10;
        n/=100;
        nn+=c2*p+c1*p*10;
        p*=100;
    }
    cout<<nn;
    return 0;
}