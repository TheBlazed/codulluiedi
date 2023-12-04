#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,n1=0,n2=0,c,p1=1,p2=1;
    for(cin>>n;n;n/=10){
        c=n%10;
        if(c%2==0){
            n1+=c*p1;
            p1*=10;
        }
        else{
            n2+=c*p2;
            p2*=10;
        }
    }
    cout<<abs(n1-n2);
    return 0;
}