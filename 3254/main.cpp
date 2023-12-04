#include <iostream>
using namespace std;
int main(){
    int n,ma=0,mi=9;
    cin>>n;
    while(n){
        if(n%2==0 && n%10>ma){
            ma=n%10;
        }
        if(n%2==1 && n%10<mi){
            mi=n%10;
        }
        n/=10;
    }
    cout<<ma*mi;
    return 0;
}