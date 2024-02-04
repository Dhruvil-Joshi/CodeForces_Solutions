#include<bits/stdc++.h>
using namespace std;
 
void Grouping_Increases()
{
    int len;
    cin>>len;
    for(int y=0;y<len;y++)
    {
        long long int val, n, penalty = 0;
        long long int a = INT_MAX;
        long long int b = INT_MAX;
        cin >> n;
        for (int i = 0;i<n;i++)
        {
            cin >> val;
            if (a>=b)
                swap(a,b);
            if (val <= a)
                a=val;
            else if (val <=b && val >= a)
               b=val;
            else
            {
                penalty++;
                a=val;
            }
        }
        cout << penalty << endl;      
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Grouping_Increases();
    return 0;
}