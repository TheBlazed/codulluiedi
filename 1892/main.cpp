#include <iostream>

using namespace std;

int main()
{
    long long n,i;
    cin>>n;
    if(n%2==0){
        cout<<"NU ESTE NOROCOS";
        return 0;
    }
    i=n/2;
    while(i<n+n/2){
        cout<<i+1<<' ';
        i++;
    }
    return 0;
}
