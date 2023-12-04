#include <iostream>

using namespace std;

int main()
{
    int n,nn,c,p=1;
    cin>>n;
    nn=n;
    do{
        c=n%10;
        if(c%2==0){
            nn=nn+1*p;
        }
        p*=10;
        n/=10;
    }while(n);
    cout<<nn;
    return 0;
}