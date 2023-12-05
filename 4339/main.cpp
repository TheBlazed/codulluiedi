#include <iostream>
using namespace std;
int main()
{
    int a,b,c, ct=0;
    cin>>a>>b>>c;
    if(a%2==0)
        ct++;
    if(b%2==0)
        ct++;
    if(c%2==0)
        ct++;
    if(ct>=2)
        cout<<"pare";
    else
        cout<<"impare";
    return 0;
}