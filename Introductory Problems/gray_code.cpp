#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
void bin(unsigned n,int c)
{
    if (c!=0)
        bin(n >> 1,--c);
    printf("%d", n & 1);
}
vector<int> res = {0,1,3,2};
int k=1;
void gray(int n,int l){
    if(n==1){
        for (auto i = res.begin(); i != res.end(); ++i){
            bin(*i,l);
            cout<<endl;
        }
        return;
    }
    gray(n-1,l);
    k++;
    vector<int> r = res;
    for (auto ir = r.rbegin(); ir != r.rend(); ++ir){
        long t = *ir + pow(2,k);
        res.push_back(t);
        bin(t,l);
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    if(n==1) cout<<"0\n1";
    else gray(n-1,n-1);
    return 0;
}