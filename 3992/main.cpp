#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x,n,ct,s=0;
    cin>>x;
    for(int i=1;i<=x;++i){
        cin>>n;
        ct=log10(n)+1;
        if(ct==2){
            ++s;
        }
    }
    cout<<s;
    return 0;
}