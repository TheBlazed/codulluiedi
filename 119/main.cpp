#include <iostream>
using namespace std;
int main(){
    int n,ma1=-1e9,ma2=-1e9,x;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>x;
        if(x>ma1){
            ma2=ma1;
            ma1=x;
        }
        else if(x>ma2) ma2=x;
    }
    cout<<ma1<<' '<<ma2;
    return 0;
}