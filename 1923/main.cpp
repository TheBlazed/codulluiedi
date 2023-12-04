#include <bits/stdc++.h>
using namespace std;
ifstream fin("egale.in");
ofstream fout("egale.out");
int main()
{
    int cer,j,k;
    unsigned long long a,b,i,x;
    fin>>cer;
    if(cer==1){
        fin>>a>>b;
        x=1;
        while(x<=b){
            for(i=1;i<=9;++i){
                if(x*i>=a && x*i<=b) fout<<x*i<<' ';
            }
            x=x*10+1;
        }
    }
    else{
        fin>>x;
        for(i=1;i<=x;i++){
            for(j=1;j<=9;j++){
                for(k=1;k<=i;k++)
                    fout<<j;
                fout<<' ';
            }
        }
    }
    return 0;
}
