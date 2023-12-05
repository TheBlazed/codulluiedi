#include <iostream>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a){
        if(a==b && b==c){
            cout<<"Nu formeaza triunghi isoscel";
        }
        else if(a==b || b==c || a==c){
            cout<<"Formeaza triunghi isoscel";
        }
        else{
            cout<<"Nu formeaza triunghi isoscel";
        }
    }
    else{
        cout<<"Nu formeaza triunghi";
    }
    return 0;
}