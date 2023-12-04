#include <iostream>
using namespace std;
int main(){
    unsigned long long n,x,s,a,b,c;
    cin>>x;
    while(x){
        cin>>n;
        a=n;
        b=n+1;
        c=n+2;
        if(a%2==0){
            a/=2;
        }
        else{
            b/=2;
        }
        if(a%3==0){
            a/=3;
        }
        else if(b%3==0){
            b/=3;
        }
        else{
            c/=3;
        }
        s=a*b*c;
        cout<<s<<' ';
        x--;
    }
    return 0;
}