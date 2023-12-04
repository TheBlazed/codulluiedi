#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n,p;
    cin>>n;
    n=sqrt(n);
    n=floor(n);
    for(p=0;n;--n){
        p+=n*n;
    }
    cout<<"Rezultatul este "<<p;
    return 0;
}
