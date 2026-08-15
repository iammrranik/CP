#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cap=0, maxi=INT_MIN;
    for(int i=0; i<n; i++){
        int a, b;
        cin>>a>>b;
        cap-=a;
        cap+=b;
        maxi=max(maxi, cap);
    }
    cout<<maxi;
    return 0;
}