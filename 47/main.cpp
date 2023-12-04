#include <iostream>
using namespace std;
int main(){
    long long n,p=0;
    cin>>n;
    for(;n;--n){
        p+=n*n;
    }
    cout<<"Rezultatul este "<<p;
    return 0;
}
