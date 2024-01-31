#include<bits/stdc++.h>
using namespace std;
 
void Choosing_Teams()
{
    int n,k;
    cin>>n>>k;
    vector<int> teams;
    int count=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        teams.push_back(temp);
    }
    sort(teams.begin(),teams.end());
    bool flag=true;
    for(int i=0;i<n && flag==true;)
    {
        if(i+2<n)
        {
            if(teams[i+2]<=5-k)
            count++;
            else
            flag=false;
        }
        else
        flag=false;
        i=i+3;
    }
    cout<<count<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Choosing_Teams();
    return 0;
}