#include <iostream>
using namespace std;
int main() {
    int n,i=2,ct=0,ma=2,pma=0;
    cin>>n;
    while(n!=1){
        ct=0;
        while(n%i==0){
            ++ct;
            n/=i;
        }
        if(ct>=pma){
            pma=ct;
            ma=i;
        }
        ++i;
        if(i*i>n){
            i=n;
        }
    }
    cout<<ma;
}
