#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int max,six=6;
    if(a>b)
    max=a;
    else
    max=b;
    int count = 7-max;
    while(count%3==0 && six%3==0){
        count=count/3;
        six=six/3;
    }
    while(count%2==0 && six%2==0)
    {
        count=count/2;
        six=six/2;
    }
    cout<<count<<"/"<<six<<endl;
    return 0;
}