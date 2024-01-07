#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    for(long long int i=0;i<n;i++)
    {
        long long int num;
        cin>>num;
        vector<long long int> arr;
        vector<long long int> temparr;
        vector<long long int> ans(num,0);
        for (int j=0; j<num; j++)
        {
            long long int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        temparr=arr;
        sort(arr.begin(),arr.end(),greater<int>());
        long long int count=1;
        for(long long int j=0;j<num;j++)
        {
            for(long long int k=0;k<num;k++)
            {
                if(arr[j]==temparr[k] && ans[k]==0)
                {
                    ans[k]=count;
                    count++;
                }
            }
        }
        for(long long int j=0;j<num;j++)
        {
            cout<<ans[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}