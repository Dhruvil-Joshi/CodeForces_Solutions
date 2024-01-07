#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int loop;
    cin>>loop;
    for(int i=0;i<loop;i++)
    {
        long long int quotient,remainder,num;
        cin>>quotient>>remainder>>num;
        long long int answer = (num-remainder)/(quotient);
        answer=(answer*quotient)+(remainder);
        cout<<answer<<endl;    
    }
    return 0;
}