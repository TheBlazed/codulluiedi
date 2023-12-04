#include <iostream>
using namespace std;
int main(){
    long long n;
    int ct2=0,ct3=0;
    cin>>n;
    while(n){
        if(n%10==2){
            ct2++;
        }
        else if(n%10==3){
            ct3++;
        }
        n/=10;        
    }
    if(ct2>ct3)
        cout<<2;
    else if(ct3>ct2)
        cout<<3;
    else
        cout<<2<<' '<<3;
    return 0;
}