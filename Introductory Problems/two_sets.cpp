#include <iostream>
#include <vector>
using namespace std;
int main() {
    long n;
    cin>>n;
    long res = (n*(n+1))/2;
    if(res%2!=0){
        cout<<"NO";
    }
    else{
        cout<<"YES"<<endl;
        long r = res/2;
        int c=0;
        res = n;
        vector<int> set1;
        while(r!=0){
            if(r<res && r<n){
                set1.push_back(r);
                r -= r;
            }
            else{
                set1.push_back(n);
                r -= n--;
            }
            c++;
        }
        cout<<c<<endl;
        for (auto i=set1.rbegin();i!=set1.rend();++i){
            cout << *i << " ";
        }
        cout<<endl;
        cout<<res-c<<endl;
        auto j=set1.rbegin();
        for(int i=1;i<=res;i++){
            if(i==*j){
                if(j!=set1.rend()) j++;
                continue;
            }
            cout<<i<<" ";
        }
    }
    return 0;
}
