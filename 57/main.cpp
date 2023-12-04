#include <fstream>
using namespace std;
ifstream fin("n_suma.in");
ofstream fout("n_suma.out");
int main(){
    int x,n,s=0;
    fin>>x;
    for(int i=1;i<=x;++i){
        fin>>n;
        s+=n;
    }
    fout<<s;
    return 0;
}