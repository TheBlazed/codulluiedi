#include <iostream>
using namespace std;
int main(){
    long long n,c,cc,ct=0,nn, i=10, j=1;
    bool ok;
    cin>>n;
    nn=n;
    while(n){
        ct++;
        n/=10;
    }
    while(ct/2>=j){
        ok=1;
        n=nn;
        while(n>=i){
            cc=n/i%i;
            c=n%i;
            if(c!=cc){
                ok=0;
                break;
            }
            n/=i;
        }
        if(ok){
            cout<<"DA";
            return 0;
        }
        if(ct%2==0){
            i*=10;
        }
        else{
            i*=10;
        }
        j++;
    }
    cout<<"NU";
    return 0;
}