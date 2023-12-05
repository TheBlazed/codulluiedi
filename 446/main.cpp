#include <iostream>
using namespace std;
int main()
{
    int n,m,c;
    cin>>n;
    if(n){
        c=n%10;
        m=c;
        n/=10;
        if(n){
            c=n%10;
            if(c>m){
                m=c;
            }
            n/=10;
            if(n){
                c=n%10;
                if(c>m){
                    m=c;
                }
            }
        }
    }
    cout<<m;
    return 0;
}