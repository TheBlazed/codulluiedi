#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    long long n,s=1,ct=2;
    cin>>n;
    for(int i=2;i<=n/2;++i){
        if(n%i==0){
            s+=i;
            ++ct;
        }
    }
    s+=n;
    cout<<setprecision(2)<<fixed<<s*1.0/ct;
    return 0;
}