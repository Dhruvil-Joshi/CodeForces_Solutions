#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<long int> flowers;
    for(int i=0;i<n;i++)
    {
        long int a;
        cin>>a;
        flowers.push_back(a);
    }
    sort(flowers.begin(),flowers.end());
    if(flowers[0]==flowers[flowers.size()-1])
    {
        long int answer=(flowers.size()*(flowers.size()-1))/2;
        cout<<0<<" "<<answer;
        return 0;
    }
    else
    {
        long int maxi=0;
        long int mini=0;
        int j=flowers.size()-1;
        for(unsigned int i=0;i<flowers.size();i++)
        {
            if(flowers[i]==flowers[0])
            {
                mini++;
            }
            if(flowers[j]==flowers[flowers.size()-1])
            {
                maxi++;
            }
            if(flowers[i]!=flowers[0] && flowers[j]!=flowers[flowers.size()-1])
            {
                cout<<flowers[flowers.size()-1]-flowers[0]<<" "<<mini*maxi;
                return 0;
            }
            j--;
        }
    }
}