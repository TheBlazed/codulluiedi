#include <iostream>

using namespace std;

int main()
{
    int n,nn,c,c1,c2,p=1;
    cin>>n>>c1>>c2;
    nn=n;
    do{
        c=n%10;
        if(c==c1){
            nn=nn+(c2-c1)*p;
        }
        p*=10;
        n/=10;
    }while(n);
    cout<<nn;
    return 0;
}
