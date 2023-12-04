#include <iostream>
using namespace std;
int main(){
    int n,mi1=1e9,mi2=1e9,mi3=1e9,x;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>x;
        if(x<mi1){
            mi3=mi2;
            mi2=mi1;
            mi1=x;
        }
        else if(x<mi2){
            mi3=mi2;
            mi2=x;
        }
        else if(x<mi3) mi3=x;
    }
    cout<<mi3<<' '<<mi2<<' '<<mi1;
    return 0;
}