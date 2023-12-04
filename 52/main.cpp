#include <iostream>
using namespace std;
int main(){
    int n,s=0;
    while(cin>>n && n){
        if(n%2==0){
            s+=n;
        }
    }
    cout<<s;
    return 0;
}