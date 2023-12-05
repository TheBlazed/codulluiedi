#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    m=n/3;
    if(n%3==0){
        cout<<m-1<<' '<<m<<' '<<m+1;
    }
    else{
        cout<<"NU EXISTA";
    }
    return 0;
}