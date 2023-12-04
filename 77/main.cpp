#include <iostream>
using namespace std;
int main(){
    int n,c;
    cin>>n;
    do{
        c=n%10;
        n/=10;
        if(c%2==0){
            cout<<c;
            return 0;
        }
    }while(n);
    cout<<-1;
    return 0;
}