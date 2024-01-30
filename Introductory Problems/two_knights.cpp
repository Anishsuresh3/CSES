#include <iostream>
using namespace std;
int main() {
    long n;
    cin>>n;
    long x=0,y=6,z=28,h=30;
    for(int i=1;i<=n;i++){
        if(i==1) {
            cout<<x<<endl;
            continue;
        }
        if(i==2) {
            cout<<y<<endl;
            continue;
        }
        if(i==3) {
            cout<<z<<endl;
            continue;
        }
        long r = z+(z-y)+((z-y)-(y-x)) + h;
        cout<<r<<endl;
        h+=12;
        x=y;
        y=z;
        z=r;
    }
    return 0;
}
