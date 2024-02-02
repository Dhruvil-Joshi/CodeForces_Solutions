#include<bits/stdc++.h>
using namespace std;
 
void Closest_Cities()
{
    int len;
    cin>>len;
    for(int y=0;y<len;y++)
    {
        int n;
        cin>>n;
        int cities[n];
        for(int i=0;i<n;i++) 
        {
        	cin>>cities[i];
        }
        int left[n];
        int right[n];
        right[0]=0;
        right[1]=1;
        left[n-1]=0;
        left[n-2]=1;
        for(int i=1;i<n-1;i++)
        {
        	if(cities[i+1]-cities[i]<cities[i]-cities[i-1])
			right[i+1]=1+right[i];
			else
			right[i+1]=right[i]+(cities[i+1]-cities[i]);
        }
        for(int i=n-2;i>0;i--)
        {
        	if(cities[i+1]-cities[i]>cities[i]-cities[i-1])
			left[i-1]=1+left[i];
			else
			left[i-1]=left[i]+(cities[i]-cities[i-1]);
        }
        int m;
        cin>>m;
        for(int i=0;i<m;i++)
        {
        	int x,y;
        	cin>>x>>y;
        	if(x<y)
        		cout<<right[y-1]-right[x-1]<<endl;
        	else
        		cout<<left[y-1]-left[x-1]<<endl;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Closest_Cities();
    return 0;
}