#include <iostream>
using namespace std;
int main()
{
    int n,k,p;
    bool ok;
    cin>>n>>k;
    p=1;
    ok=0;
    while(n!=0){
        if(n%10!=k) {
        p=p*(n%10);
        ok=1;
        }
        n/=10;
    }
    if(ok==0){
        cout<<0;
    }
    else{
    cout<<p;
    }
 return 0;
}