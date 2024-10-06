#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        int y;
        cin>>x>>y;
        if(x>=y){
            cout<<"0"<<endl;
        }
        else {
            int extra= y/x;
            if(extra*x==y){
                extra --;
            }
            cout<<extra<<endl;
        }
    }
    return 0;


}
