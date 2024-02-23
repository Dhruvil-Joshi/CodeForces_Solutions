#include<bits/stdc++.h>
using namespace std;
 
void Sasha_and_the_Beautiful_Array()
{
    int len;
    cin>>len;
    for(int y=0;y<len;y++)
    {
        long long int n;
        cin>>n;
        long long int min=INT_MAX;
        long long int max=INT_MIN;
        for(long long int i=0;i<n;i++)
        {
            long long int temp;
            cin>>temp;
            if(temp>max)
            max=temp;
            if(temp<min)
            min=temp;
        }
        cout<<max-min<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Sasha_and_the_Beautiful_Array();
    return 0;
}