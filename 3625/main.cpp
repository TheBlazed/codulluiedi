#include <iostream>
using namespace std;
int main(){
    int n,c,sp,si,s3,ct5,p=1,s;
    cin>>n;
    sp=si=s3=ct5=0;
    s=n%10;
    while(n){
        c=n%10;
        sp+=c*c;
        if(c%2==1){
            si+=c;
        }
        if(c%3==0){
            s3+=c;
        }
        if(c>5){
            ct5++;
        }
        if(c){
            p*=c;
        }
        n/=10;
    }
    s+=c;
    cout<<sp<<' '<<si<<' '<<s3<<' '<<ct5<<' '<<p<<' '<<s;
    return 0;
}