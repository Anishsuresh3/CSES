#include <iostream>
using namespace std;
int main() {
    long n;
    cin>>n;
    long x,prev=0;
    long step=0;
    for(long i=0;i<n;i++){
        cin>>x;
        if(prev==0){ 
            prev=x;
            continue;
        }
        if(x>=prev){
            prev=x;
            continue;
        }
        step += prev-x;
    }
    cout<<step;
    return 0;
}
