#include <iostream>
using namespace std;
int main(){
    int c,n,s=0;
    cin>>n;
    while(n){
        c=n%10;
        s+=c;
        n/=10;
    }
    cout<<s;
    return 0;
}