#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int loop;
    cin>>loop;
    for(int x=0;x<loop;x++)
    {
        int n,k;
        cin>>n>>k;
        int counter=n-k;
        for(int j=0;j<k;j++)
        {
            cout<<j+1<<" ";
        }
        for(int j=n;counter>0;j--)
        {
            cout<<j<<" ";
            counter--;
        }
        cout<<endl;
    }
    return 0;
}