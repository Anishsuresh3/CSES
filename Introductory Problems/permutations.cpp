#include <iostream>
using namespace std;
int main() {
    long n;
    cin>>n;
    if(n==1){
        cout<<1;
    }
    else if(n<=3){
        cout<<"NO SOLUTION";
    }
    else{
        long mid = (n/2)+1;
        long c = 1;
        bool f = true;
        for(int i=0;i<n;i++){
            if(f){
                cout<<mid++<<" ";
                f = false;
            }
            else{
                cout<<c++<<" ";
                f = true;
            }
        }
    }
    return 0;
}
