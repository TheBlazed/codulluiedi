#include <iostream>

using namespace std;

int main()
{
    long long n,i=1,p=0;
    cin>>n;
    while(i<=n){
        p+=i*(i+1);
        i++;
    }
    cout<<"Rezultatul este "<<p;
    return 0;
}
