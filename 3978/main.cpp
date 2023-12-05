#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    int s1,s2,s3;
    int i;
    s1=s2=s3=0;
    cin>>a>>b>>c;
    for(i=a;i<=b;i++)
        s1+=i;
    for(i=b;i<=c;i++)
        s2+=i;
    for(i=a;i<=c;i++)
        s3+=i;
    cout<<s1<<' '<<s2<<' '<<s3;
    return 0;
}