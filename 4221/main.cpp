#include <iostream>
using namespace std;
int main(){
    int a,b,a1,a2,b1,b2;
    cin>>a>>b;
    a1=b1=0;
    a2=b2=9;
    while(a){
        if(a1<a%10){
            a1=a%10;
        }
        if(a%10<a2){
            a2=a%10;
        }
        a/=10;
    }
    while(b){
        if(b1<b%10){
            b1=b%10;
        }
        if(b%10<b2){
            b2=b%10;
        }
        b/=10;
    }
    if(a1==b2){
        cout<<a1;
    }
    else if(a2==b1){
        cout<<a2;
    }
    else{
        cout<<"NU";
    }
    return 0;
}