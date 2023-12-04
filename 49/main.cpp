#include <iostream>
using namespace std;
int main(){
    long long n,p=1;
    cin>>n;
    for(;n>=1;--n){
        p*=n;
    }
    cout<<p;
    return 0;
}
