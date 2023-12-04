#include <iostream>
using namespace std;
int main(){
    int n,i,s,nn;
    cin>>n;
    nn=n;
    for(i=1,s=0;i<=nn;++i,--n){
        s+=i*n;
    }
    cout<<"Rezultatul este "<<s;
    return 0;
}
