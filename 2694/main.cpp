#include <iostream>
using namespace std;
int main() {
    int a, b, mina=10,minb=10, maxa=-1, maxb=-1;
    cin>>a>>b;
    maxa=max(a%10, a/10%10);
    maxa=max(maxa, a/100%10);
    maxb=max(b%10, b/10%10);
    maxb=max(maxb, b/100%10);
    mina=min(a%10, a/10%10);
    mina=min(mina, a/100%10);
    if (mina==0) {
        if (b%10!=0 && b%10<minb) {
            minb=b%10;
        }
        if (b/10%10 && b/10%10<minb) {
            minb=b/10%10;
        }
        if (b/100%10<minb) {
            minb=b/100%10;
        }

    }
    else {
        minb=min(b%10, b/10%10);
        minb=min(minb, b/100%10);
    }
    if (maxa>maxb) {
        cout<<maxa<<maxb<<" ";
    }
    else {
        cout<<maxb<<maxa<<" ";
    }
    if (minb*10+mina>maxa*10+minb) {
        cout<<maxa<<minb;
        return 0;
    }
    if (mina==0) {
        cout<<minb<<mina<<" ";
    }
    else if (minb==0) {
        cout<<mina<<minb<<" ";
    }
    else {
        if (mina<minb) {
            cout<<mina<<minb;
        }
        else {
            cout<<minb<<mina;
        }
    }
    return 0;
}