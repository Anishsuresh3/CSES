#include <iostream>
using namespace std;
int main() {
    long n;
    cin>>n;
    long sum=0;
    long arr[n];
    for(int i=0;i<n;i++){
        long x,y;
        cin>>x>>y;
        y--;
        x--;
        if(y>x){
            if(y%2==1){
                arr[i] = (y*y)+(x+1);
            }
            else{
                arr[i] = (y*y)+(2*(y+1)-1)-x;
            }
        }
        else{
            if(x%2==1){
                arr[i] = (x*x)+(2*(x+1)-1)-y;
            }
            else{
                arr[i] = (x*x)+(y+1);
            }
        }
    }
    for(long x:arr){
        cout<<x<<endl;
    }
    return 0;
}
