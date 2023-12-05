#include <iostream>
using namespace std;
int main()
{
    int s,c,n;
    bool oc,on;
    oc=on=false;
    cin>>s>>c>>n;
    if(s%c==0){
        oc=true;
    }
    if(s%n==0){
        on=true;
    }
    if(oc){
        cout<<"C";
    }
    if(on){
        cout<<"N";
    }
    if(!oc && !on){
        cout<<"nimic";
    }
    return 0;
}