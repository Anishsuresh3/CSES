#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int maxi=0;
    int c=1;
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[i+1]){
            maxi = max(maxi,c);
            c=1;
        }
        if(s[i]==s[i+1]){
            c++;
        }
    }
    cout<<maxi;
    return 0;
}
