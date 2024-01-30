#include <iostream>
#include <cmath>
using ll = unsigned long long;
using namespace std;
int main() {
    long n;
    cin>>n;
    ll t = 1LL;
    long base = 2;
    while(n>0){
        if(n%2!=0)
            t =(t*base)%1000000007;
        base = (base*base)%1000000007;
        n /= 2;
    }
    cout<<t%1000000007;
    return 0;
}
