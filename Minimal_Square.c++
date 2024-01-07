#include <bits/stdc++.h>
using namespace std;
int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        long int loop;
        cin>>loop;
        for(long int i=0;i<loop;i++)
        {
            long int a,b;
            cin>>a>>b;
            int mini=min(a,b);
            int maxi=max(a,b);
            if(maxi>=2*mini)
            cout<<pow(maxi,2)<<endl;
            else
            cout<<pow(mini,2)*4<<endl;
        }
    return 0;
}