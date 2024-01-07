#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    vector<int> one;
    vector<int> two;
    vector<int> three;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            one.push_back(i+1);
        }
        else if(arr[i]==2)
        {
            two.push_back(i+1);
        }
        else if(arr[i]==3)
        {
            three.push_back(i+1);
        }
    }
    int team_no=min(one.size(),min(two.size(),three.size()));
    cout<<team_no<<endl;
    for(int i=0;i<team_no;i++)
    {
        cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
    }
    return 0;
}