#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        if(num%3==0)
        cout<<"Second"<<endl;
        else
        cout<<"First"<<endl;
    }
    return 0;
}