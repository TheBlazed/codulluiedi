#include <iostream>
using namespace std;
int main(){
    int n,c1=0,c2=0;
    cin>>n;
    for(int i=2;i*i<=n;++i){
        if(n%i==0){
            if(c1==0) c1=i;
            else if(c2==0) c2=i; 
        }
    }
    if(c2==0) cout<<c1+n/c1;
    else cout<<c1+c2;
    return 0;
}