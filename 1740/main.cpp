#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    if(((a-(b-1)*b/2))%b==0){
        cout<<"DA";
    }
    else{
        cout<<"NU";
    }
    return 0;
}