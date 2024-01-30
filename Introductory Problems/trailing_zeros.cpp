#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long n;
    cin>>n;
    long zeros=0;
    int exp=1;
    while(n>=pow(5,exp)){
        zeros += n/pow(5,exp++);
    }
    cout<<zeros;
    return 0;
}