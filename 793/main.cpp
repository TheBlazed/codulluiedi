#include <iostream>
using namespace std;
int main()
{
    int a,b,c,s1,s2,s3;
    cin>>a>>b>>c;
    s1=a*b+c;
    s2=b*c+a;
    s3=a*c+b;
    cout<<max(s1,max(s2,s3));
    return 0;
}