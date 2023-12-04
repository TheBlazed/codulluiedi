#include <iostream>
using namespace std;
int main(){
    int n,k;
    bool ok=1;
    cin>>n>>k;
    while(n){
        if(n%10>k){
            ok=0;
        }
        n/=10;
    }
    if(ok==1){
        cout<<"DA";
    }
    else{
        cout<<"NU";
    }
    return 0;
}