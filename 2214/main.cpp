#include <iostream>
using namespace std;
int main(){
    int a,b,ca,cb,cta=0,ctb=0,aa,bb,ct=0;
    cin>>a>>b;
    aa=a;
    bb=b;
    while(a){
        ++cta;
        a/=10;
    }
    while(b){
        ++ctb;
        b/=10;
    }
    if(cta!=ctb){
        cout<<"NU";
        return 0;
    }
    a=aa;
    b=bb;
    while(a){
        ca=a%10;
        cb=b%10;
        a/=10;
        b/=10;
        if(ca==cb){
            ++ct;
        }
    }
    cout<<"DA\n"<<ct;
    return 0;
}