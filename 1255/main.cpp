#include <bits/stdc++.h>

using namespace std;
ifstream fin("lipsa.in");
ofstream fout("lipsa.out");
int main()
{
    int n,i,x,s=0;
    fin>>n;
    for(i=1;i<=n;++i) s^=i;
    for(i=1;i<n;++i){
        fin>>x;
        s^=x;
    }
    fout<<s;
    return 0;
}