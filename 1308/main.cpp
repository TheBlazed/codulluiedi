#include <iostream>
using namespace std;
int main()
{
    int x,y, x1,x2,y1,y2;
    cin>>x>>y;
    x1=x/10;
    x2=x%10;
    y1=y/10;
    y2=y%10;
    if(x1==y1 || x1==y2 || x2==y1 || x2==y2){
        cout<<"da";
    }
    else{
        cout<<"nu";
    }
    return 0;
}