#include<bits/stdc++.h>
using namespace std;
 
void Sort_With_Step()
{
    int len;
    cin>>len;
    for(int y=0;y<len;y++)
    {
        int n,k;
        cin>>n>>k;
        vector<int>numbers;
        int count=0;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            numbers.push_back(temp);
            if((temp-(i+1))%k!=0)
            count++;
        }
        if(count==0)
        cout<<0<<endl;
        else if(count==2)
        cout<<1<<endl;
        else
        cout<<-1<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Sort_With_Step();
    return 0;
}