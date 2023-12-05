#include <iostream>
using namespace std;
int main()
{
    long long n;
    int a,l,z, ca,cl,cz;
    int aa,ll,zz;
    ca=cl=cz=0;
    cin>>n;
    n=n/1000000;
    a=n/10000%100;
    l=n/100%100;
    z=n%100;
    aa=a;
    while(a){
        ca++;
        a/=10;
    }
    ll=l;
    while(l){
        cl++;
        l/=10;
    }
    zz=z;
    while(z){
        cz++;
        z/=10;
    }
    if(ca!=2){
        cout<<0<<aa<<' ';
    }
    else{
        cout<<aa<<' ';
    }
    if(cl!=2){
        cout<<0<<ll<<' ';
    }
    else{
        cout<<ll<<' ';
    }
    if(cz!=2){
        cout<<0<<zz;
    }
    else{
        cout<<zz;
    }
    return 0;
}