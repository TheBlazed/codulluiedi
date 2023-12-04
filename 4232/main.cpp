#include <iostream>
using namespace std;
int main(){
    long long n,o=0,c1,c2,nn,ct=0;
    cin>>n;
    nn=n;
    while(n){
        o=o*10+n%10;
        ct++;
        n/=10;
    }
    if(ct%2!=0){
        cout<<"NU";
        return 0;
    }
    while(nn){
        c1=nn%10;
        c2=o%10;
        if(c1+c2!=9){
            cout<<"NU";
            return 0;
        }
        nn/=10;
        o/=10;
    }
    cout<<"DA";
    return 0;
}