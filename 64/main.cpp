#include <iostream>
using namespace std;
int main(){
    long long n,s=0,i;
    cin>>n;
    for(i=1;i*i<n;i++){
        if(n%i==0){
            s+=i+n/i;
        }
    }
    if(i*i==n){
        s+=i;
    }
    if(s/2==n){
        cout<<n<<" este perfect";
    }
    else{
        cout<<n<<" nu este perfect";
    }
    return 0;
}