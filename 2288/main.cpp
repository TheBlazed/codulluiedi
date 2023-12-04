#include <iostream>
using namespace std;
int main(){
    int n,c,ma=0;
    cin>>n;
    while(n){
        c=n%10;
        if(c>ma && c%2==1){
            ma=c;
        }
        n/=10;
    }
    if(ma){
        cout<<ma;
    }
    else{
        cout<<"nu exista";
    }
    return 0;
}