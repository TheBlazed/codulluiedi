#include <iostream>
using namespace std;
int main(){
    int n;
    bool ok1=false,ok0=false;
    cin>>n;
    while(n){
        if(n%10==0){
            ok0=true;
        }
        else if(n%10==1){
            ok1=true;
        }
        else{
            cout<<"nu";
            return 0;
        }
        n/=10;
    }
    if(ok0&&ok1)
        cout<<"da";
    else
        cout<<"nu";
    return 0;
}