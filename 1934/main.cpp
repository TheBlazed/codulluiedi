#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;
ifstream fin("elfii.in");
ofstream fout("elfii.out");
int main()
{
    int a,b,c,ct=0;
    fin>>a>>b>>c;
    if((a%2 && b%2 && c%2) || (a==0 && b==0 && c==0)){
        fout<<"Poate data viitoare!";
        return 0;
    }
    if((a*100+b*10+c)%2==0 && a!=0) ct++;
    if((a*100+c*10+b)%2==0 && a!=0) ct++;
    if((b*100+a*10+c)%2==0 && b!=0) ct++;
    if((b*100+c*10+a)%2==0 && b!=0) ct++;
    if((c*100+a*10+b)%2==0 && c!=0) ct++;
    if((c*100+b*10+a)%2==0 && c!=0) ct++;

    if(a<b) swap(a,b);
    if(a<c) swap(a,c);
    if(b<c) swap(b,c);
    if(ct) fout<<ct<<'\n'<<a<<b<<c;
    else fout<<"Poate data viitoare!";
    return 0;
}
