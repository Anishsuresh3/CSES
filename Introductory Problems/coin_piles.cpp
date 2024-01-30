#include <iostream>
using namespace std;
int main() {
    long n;
    cin>>n;
    for(int i=0;i<n;i++){
        long a,b;
        cin>>a>>b;
        if(((a+b)%3==0) && min(a,b)*2>=max(a,b)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}