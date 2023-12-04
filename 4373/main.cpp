#include <iostream>
using namespace std;
int main(){
    unsigned long long a, b, r,aa,bb,cdc,cmc;
    cin>>a>>b;
    aa=a;
    bb=b;
    while(b){
    r=a%b;
    a=b;
    b=r;
    }
    cmc=aa*bb/a;
    cout<<cmc/aa+cmc/bb-2;
    return 0;
}