#include<bits/stdc++.h>
using namespace std;
 
void Sorting_with_Twos()
{
    long long int len;
    cin>>len;
    for(long long int x=0;x<len;x++)
    {
        int n;
        cin>>n;
        vector<long long int> arr;
        vector<int> answer;
        for(int i=0;i<n;i++)
        {
            long long int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            answer.push_back(i+1);
        }
        bool flag=true;
        for(int i=0;i<answer.size() && flag;i++)
        {
            int temp=answer[i];
            if(temp!=1 && temp!=2 && temp!=4 && temp!=8 && temp!=16)
            flag=false;
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Sorting_with_Twos();
    return 0;
}