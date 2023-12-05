#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if((n>0 && m>0) || (n<0 && m<0)){
        cout<<"da";
    }
    else{
        cout<<"nu";
    }
    return 0;
}