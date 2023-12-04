#include <iostream>
using namespace std;
int main(){
    long long n,i,s=0,j,p;
    cin>>n;
    for(i=1;i<=n;++i){
        for(j=1,p=1;j<=i;++j){
            p*=i;
        }
        s+=p;
    }
    cout<<"Rezultatul este "<<s;
    return 0;
}
