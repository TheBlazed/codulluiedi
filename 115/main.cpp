#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n,x,ct=0;
    double s=0;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>x;
        if(x%2==0){
            s+=x;
            ct++;
        } 
    }
    s=s/ct*1.0;
    cout<<setprecision(2)<<fixed<<s;
    return 0;
}