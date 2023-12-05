#include <iostream>
using namespace std;
int main(){
    int n,c;
    cin>>n;
    while(n){
        c=n%10;
        if(c!=0){
            cout<<n;
            return 0;
        }
        n/=10;
    }
    return 0;
}