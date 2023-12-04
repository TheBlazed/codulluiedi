#include <iostream>
using namespace std;
int main(){
    long long n,i=1,p=1;
    cin>>n;
    while(i<=n*2){
        p*=i;
        i+=2;
    }
    cout<<p;
    return 0;
}