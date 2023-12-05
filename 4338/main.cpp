#include <iostream>
using namespace std;
int main()
{
    int a,b,ca,cb;
    cin>>a>>b;
    ca=a/10%10;
    cb=b/10%10;
    if(ca==cb){
        cout<<a+b;
    }
    else{
        if(ca>cb){
            cout<<a;
        }
        else{
            cout<<b;
        }
    }
    return 0;
}