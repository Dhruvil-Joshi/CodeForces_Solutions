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
	char ans='a';
	int n;
	cin>>n;
	int a[n];
	string s="a";
	unordered_map<char,int> m;
	m[ans]++;
	for(int i=0;i<n;i++){ cin>>a[i];}
	for(int i=1;i<n;i++){
		if(a[i]==0){
			ans++;
			m[ans]++;
			s+=ans;
		}else{
			for(int j=0;j<s.size();j++){
				if(m[s[j]]==a[i])
				{
					m[s[j]]++; 
					s+=s[j]; 
					break;
				}
			}
		}
	}
	cout<<s<<endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    li t = 1;
    cin >> t;
    while (t--)
    {
        code();
    }
    return 0;
}
