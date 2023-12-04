#include <iostream>

using namespace std;

int main()
{
    int a,b,nrd=0,mi=0,ma,ct=0,mct=0,d;
    cin>>a>>b;
       if(a&1) ++a; 
    for(int i=a;i<=b;i+=2){
        ct=0;
        for(d=1;d*d<i;++d)
            if(i%d==0){
                if(d%2==0) ++ct;
                if(i/d%2==0)++ct;
            }
        if(d*d==i && d%2==0) ++ct;
        if(ct>mct){
            mct=ct;
            mi=i;
            ma=i;
        }
        else if(ct==mct) ma=i;
    }
    cout<<mct<<' '<<mi<<' '<<ma;
    return 0;
}
