#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int c1, c2, i;
    cin>>c1>>c2>>i;
    c1=c1*c2;
    double h=(double) c1/i;
    h=(int) (h*100)/100.;
    cout<<fixed<<setprecision(2)<<h;
    return 0;
}