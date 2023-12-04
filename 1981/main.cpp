#include <iostream>

using namespace std;

int main(){
    unsigned long long n,x,nrd,d,p;
    cin>>n;
    for(int i=0;i<n;++i){
        x=i*(1ULL<<i)+1;
        nrd=1;
        d=2;
        while(x!=1){
            p=0;
            while(x%d==0){
                ++p;
                x/=d;
            }
            if(p) nrd*=p+1;
            if(d*d<x) ++d;
            else d=x;
        }
        cout<<nrd<<' ';

    }
    return 0;
}
