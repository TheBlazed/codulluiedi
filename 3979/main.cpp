#include <iostream>
using namespace std;
int main(){
    int n,c,s=0;
    cin>>n;
    while(n){
        c=n%10;
        if(c>=3 && c<=7){
            s+=c;
        }
        n/=10;
    }
    cout<<s;
    return 0;
}