#include <fstream>
using namespace std;
ifstream fin("nrcurat.in");
ofstream fout("nrcurat.out");
int main(){
    int x,xx,o=0,u=0;
    while(fin>>x){
        o=0;
        u=0;
        xx=x;
        while(x){
            u=u*10+9;
            o=o*10+x%10;
            x/=10;
        }
        u-=xx;
        if(o==u){
            fout<<1<<' ';
        }
        else{
            fout<<0<<' ';
        }
    }
    return 0;
}