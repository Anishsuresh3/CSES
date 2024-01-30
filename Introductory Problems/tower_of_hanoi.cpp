#include <iostream>
#include <cmath>
using namespace std;
void toh(int s,int e,int m,int n){
    if(n==0) return;
    toh(s,m,e,n-1);
    cout<<s<<" "<<e<<endl;
    toh(m,e,s,n-1);
}
int main(){
    int n,c=0;
    cin>>n;
    cout<<pow(2,n)-1<<endl;
    toh(1,3,2,n);
    return 0;
} 