#include <bits/stdc++.h>
using namespace std;
ifstream fin("conversie_b_10.in");
ofstream fout("conversie_b_10.out");
int main()
{
   int n10=0,b, nb, p=1;
   fin>>nb>>b;
   while(nb!=0)
   {
       n10=n10+p*(nb%10);
       p=p*b;
       nb/=10;
   }
   fout<<n10;
   return 0;
}
