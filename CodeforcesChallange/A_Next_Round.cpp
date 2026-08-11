#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int a[n], cnt=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(i<=k-1 && a[i]>0){
            cnt++;
        }
        else if(i>k-1 && a[i]>=a[k-1] && a[i]>0){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}