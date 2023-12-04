#include <bits/stdc++.h>
#define N 1005
using namespace std;
ifstream fin("ciffrecv.in");
ofstream fout("ciffrecv.out");
int fr[10],x;
int main()
{
    while(fin>>x){
        fr[x]++;
    }
    if(fr[7]) fout<<7<<' '<<fr[7];
    else if(fr[5]) fout<<5<<' '<<fr[5];
    else if(fr[3]) fout<<3<<' '<<fr[3];
    else fout<<2<<' '<<fr[2];
    return 0;
}
