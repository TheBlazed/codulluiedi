#include <iostream>
using namespace std;
int main()
{
    int n, cnt=0;
    while(cin>>n && n!=0)
        if(n%2==0)
            cnt++;
    if(cnt)
        cout<<cnt;
    else
        cout<<"NU EXISTA";
}