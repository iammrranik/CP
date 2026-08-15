#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cin>>y;
    y++;
    while(true){
        int a[4], tmp=y;
        for(int i=0; i<4; i++){
            // cout<<tmp%10<<"\n";
            a[i]=tmp%10;
            tmp/=10;
        }
        sort(a, a+4);
        if(a[0]!=a[1] && a[1]!=a[2] && a[2]!=a[3] && a[3]!=a[0]){
            cout<<y;
            break;
        }
        y++;
    }
    return 0;
}