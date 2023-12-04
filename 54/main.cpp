#include <iostream>
using namespace std;
int main(){
    int n,ma=-1000001;
    while(cin>>n && n){
        ma=max(ma,n);
    }
    if(ma!=-1000001){
        cout<<ma;
    }
    else{
        cout<<"NU EXISTA";
    }
    return 0;
}