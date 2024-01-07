#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,count=1;
    cin>>n;
    if(n==1)
    {
        string team;
        cin>>team;
        cout<<team<<endl;
    }
    else{
    vector<string> teams;
    for(int i=0;i<n;i++)
    {
        string t;
        cin>>t;
        teams.push_back(t);
    }
        sort(teams.begin(),teams.end());
        vector<string> unique_teams;
        vector<int> goal_count;
        unique_teams.push_back(teams[0]);
    for(int i=0;i<n-1;i++)
    {
        if(teams[i]!=teams[i+1])
        {
            unique_teams.push_back(teams[i+1]);
            goal_count.push_back(count);
            count=1;
        }
        else
        {
            count++;
        }
    }
      goal_count.push_back(count);
    long int max=goal_count[0];
    int ans=0;
    for(int i=0;i<goal_count.size();i++)
    {
        if(goal_count[i]>max)
        {
            max=goal_count[i];
            ans=i;
        }
    }
    cout<<unique_teams[ans]<<endl;
    }
    return 0;
}