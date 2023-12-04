#include <iostream>
using namespace std;
int main(){
    int n,k,nr,s=0,ct=1;
    cin>>nr>>k;
    for(int i=1;i<=nr;i++){
        cin>>n;
        ct=1;
        for(int i=1;i<=n/2;i++){
            if(n%i==0){
                ct++;
            }
            if(ct==k){
                s+=n;
                break;
            }
        }
    }
    cout<<s;
    return 0;
}