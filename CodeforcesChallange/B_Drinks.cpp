#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum=0;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        sum+=x;
    }
    cout<<fixed<<setprecision(12)<<sum*1.0/n;
    return 0;
}