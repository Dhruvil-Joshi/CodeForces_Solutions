#include<bits/stdc++.h>
using namespace std;
 
void Thorns_And_Coins()
{
    int len;
    cin>>len;
    for(int y=0;y<len;y++)
    {
        int n;
        cin>>n;
        vector<char> arr;
        for(int i=0;i<n;i++)
        {
            char temp;
            cin>>temp;
            arr.push_back(temp);
        }
        bool flag=true;
        int count=0;
        for(int i=0;i<n && flag==true;i++)
        {
            if(arr[i]=='@')
            count++;
            if(i+1<n && (arr[i]==arr[i+1] && arr[i+1]=='*'))
            flag=false;
        }
        cout<<count<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Thorns_And_Coins();
    return 0;
}