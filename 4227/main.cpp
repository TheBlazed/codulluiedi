#include <iostream>
using namespace std;
int main(){
    int n,m,c1,c2;
    cin>>n>>m;
    while(n){
        c1=n%10;
        c2=m%10;
        if(c1+c2>=10){
            cout<<"DA";
            return 0;
        }
        n/=10;
        m/=10;
    }
    cout<<"NU";
    return 0;
}