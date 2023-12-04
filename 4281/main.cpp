#include <iostream>
using namespace std;
int main(){
    int n,mi=10001;
    while(cin>>n && n){
        if(n>9 && n<100){
            mi=min(mi,n);
        }
    }
    if(mi!=10001){
        cout<<mi;
    }
    else{
        cout<<"NU EXISTA";
    }
    return 0;
}