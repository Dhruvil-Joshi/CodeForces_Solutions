#include<bits/stdc++.h>
using namespace std;
 
void Arranging_Cats()
{
    long long int n;
    cin>>n;
    for(long long int i=0;i<n;i++)
    {
        long long int t,n1=0,n2=0,diff=0,pos=0;
        cin>>t;
        string s1,s2;
        cin>>s1>>s2;
        for(int j=0;j<t;j++)
        {
            if(s1[j]!=s2[j])
            pos++;
            if(s1[j]=='1')
            n1++;
            if(s2[j]=='1')
            n2++;
        }
        diff=abs(n1-n2);
        cout<<abs(diff)+(abs(diff-pos)/2)<<endl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Arranging_Cats();
    return 0;
}