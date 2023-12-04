#include <iostream>
using namespace std;
int main(){
    int n,mi=1000001;
    while(cin>>n && n){
        if(n>0){
            mi=min(mi,n);
        }
    }
    if(mi!=1000001){
        cout<<mi;
    }
    else{
        cout<<"NU EXISTA";
    }
    return 0;
}