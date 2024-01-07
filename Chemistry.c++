#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int loop;
    cin>>loop;
    for(long long int x=0;x<loop;x++)
    {
        long long int n,k,count=0;
        cin>>n>>k;
        string s;
        cin>>s;
        if(n==1)
            cout<<"YES"<<endl;
        else
        {
        sort(s.begin(),s.end());
        vector<int> letters;
        for(long long int i=0;i<n;i++)
        {
            if(s[i]!=s[i+1])
            {
                if((i-count+1)%2!=0)
                {
                    letters.push_back(i-count+1);
                }
                count=i+1;
            }
        }
        int temp=k-letters.size();
        if(temp>=-1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        }
    }
    return 0;
}