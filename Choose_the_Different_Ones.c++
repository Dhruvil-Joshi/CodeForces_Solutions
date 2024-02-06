#include <bits/stdc++.h>
#define ll long long int
#define li long int
#define pb push_back
#define all(x) x.begin(), x.end()
#define Y cout << "YES\n"
#define N cout << "NO\n"
using namespace std;
void code()
{
	int n,m,k;
	cin>>n>>m>>k;
	int a[n],b[m];
	map<int,int> m1,m2;
	for(int i=0;i<n;i++) {cin>>a[i]; m1[a[i]]++;}
	for(int i=0;i<m;i++) {cin>>b[i]; m2[b[i]]++;}
	int cnt=0,cnt1=0;
	for(int i=0;i<k;i++){ 
		if(m1[i+1]!=0) cnt++;
		if(m2[i+1]!=0) cnt1++;
		if(m1[i+1]==0 && m2[i+1]==0) {N; return;}
	}
		 // cout<<"sum:"<<cnt<<"+"<<cnt1<<endl;
	if(cnt+cnt1>=k){
		if(cnt<k/2) {N; return;}
		else if(cnt1<k/2){ N; return;}
		vector<int> same;
		vector<int> left1,left2;
		for(int i=0;i<k;i++){
			if(m1[i+1]!=0 && m2[i+1]!=0) same.pb(i+1);
			else if(m1[i+1]==0) left2.pb(i+1);
			else if(m2[i+1]==0) left1.pb(i+1);
		}
		if((int)same.size()>=k) {Y; return;}
		int s=same.size();
		int l1=left1.size(),l2=left2.size();
		if(l1<k/2){
			s-=(k/2-l1);
			l1=k/2;
		}
		if(l2<k/2){
			s-=(k/2-l2);
			l2=k/2;
		}
		// cout<<"he";
		if(s<0) {N; return;}
		if(l1==k/2 && l2==k/2 && s==0) Y;
		else N;
		return;
	}
	N;
    return;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    li z = 1;
    cin >> z;
    while (z--)
    {
        code();
    }
  return  0;
}