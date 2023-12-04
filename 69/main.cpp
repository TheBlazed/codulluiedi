#include <iostream>
using namespace std;
int main(){
    int n,ogl=0;
    for(cin>>n;n;n/=10)
        ogl=ogl*10+n%10;
    cout<<ogl;
    return 0;
}