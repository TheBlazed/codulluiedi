#include <iostream>

using namespace std;

int main()
{
    int n,m,r;
    cin>>n>>m;
    if(n==0 && m==0){
        cout<<-1;
        return 0;
    }
    while(n){
        r=m%n;
        m=n;
        n=r;
    }
    cout<<m;
    return 0;
}
