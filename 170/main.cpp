#include <iostream>
using namespace std;
int main(){
    int n,c,mi=9,ma=0;
    cin>>n;
    if(n==0){
        cout<<0;
        return 0;
    }
    while(n){
        c=n%10;
        if(c<mi){
            mi=c;
        }
        if(c>ma){
            ma=c;
        }
        n/=10;
    }
    cout<<mi+ma;
    return 0;
}