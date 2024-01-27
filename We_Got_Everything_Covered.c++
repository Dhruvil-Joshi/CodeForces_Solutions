#include<bits/stdc++.h>
using namespace std;
 
void Covered()
{
    long long int len;
    cin>>len;
    for(long long int i=0;i<len;i++)
    {
        int n,k;
        cin>>n>>k;
        for(int x=0;x<n;x++)
        {
            char temp='a';
            for(int y=0;y<k;y++)
            {
                cout<<temp;
                temp++;
            }
        }
        cout<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Covered();
    return 0;
}