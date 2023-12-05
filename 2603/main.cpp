#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double n;
    cin>>n;
    n*=10;      
    n=floor(n);
    cout<<int(n)%10;
    return 0;
}