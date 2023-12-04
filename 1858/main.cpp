#include <fstream>
using namespace std;
ifstream fin("restmare.in");
ofstream fout("restmare.out");
int main(){
    long long n,k;
    fin>>n;
    k=n/2;
    if(n%2){
        fout<<k*k;
    }
    else{
        fout<<k*(k-1);
    }
    return 0;
}