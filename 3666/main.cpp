#include <iostream>
using namespace std;
int main(){
    int n,ct=0,i;
    cin>>n;
    for(i=1;i*i<n;++i){
        if(n%i==0){
            ct+=2;
        }
    }
    if(i*i==n){
        ct++;
    }
    if(ct&1){
        cout<<"da";
    }
    else{
        cout<<"nu";
    }
    return 0;
}