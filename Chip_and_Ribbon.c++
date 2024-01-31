#include<bits/stdc++.h>
using namespace std;
 
void Chip_and_Ribbon()
{
    long double len;
    cin>>len;
    for(long long int x=0;x<len;x++)
    {
        long long int n;
        cin>>n;
        vector<long long int> arr;
        for(long long int i=0;i<n;i++)
        {
            long long int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        long long int ans=arr[0]-1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>arr[i-1])
            ans+=arr[i]-arr[i-1];
        }
        cout<<ans<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Chip_and_Ribbon();
    return 0;
}