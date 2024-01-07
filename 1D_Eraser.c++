#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int loop;
    cin>>loop;
    for(long long int j=0;j<loop;j++)
    {
        long long int n,s;
        cin>>n>>s;
        string cell;
        cin>>cell;
        long long int count=0;
        for(unsigned i=0;i<cell.size();i++)
        {
            if(cell[i]=='B')
            {
                count++;
                i=i+s-1;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}