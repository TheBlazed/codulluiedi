#include <iostream>
using namespace std;
int main()
{
    int a,b,d,g=1;
    cin>>a>>b>>d;
    if(a%d!=0){
        g*=(a/d+1);
    } 
    else{
        g*=a/d;
    }
    if(b%d!=0){
        g*=(b/d+1);
    }
    else{
        g*=b/d;
    }
    cout<<g;
    return 0;
}