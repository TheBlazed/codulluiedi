#include <iostream>
using namespace std;
int main(){
    long long n,i=1,j=1,s=0,p=1;
    cin>>n;
    while(i<=n){
        p=1;
        j=1;
        while(j<=i){
            p*=j;
            j++;
        }
        s+=p;
        i++;
    }
    cout<<"Rezultatul este "<<s;
    return 0;
}