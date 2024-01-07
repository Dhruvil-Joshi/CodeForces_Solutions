#include <bits/stdc++.h>
using namespace std;
 
void Language()
{
    long long int loop;
    cin >> loop;
    for (long long int i = 0; i < loop; i++)
    {
        long long int n;
        cin>>n;
        char arr[n];
        for(long long int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        cout<<arr[0];
        for(long long int j=1;j<n-1;j++)
        {
            if((arr[j-1]=='a'||arr[j-1]=='e')&&(arr[j+1]!='a'&&arr[j+1]!='e'))
            cout<<arr[j]<<".";
            else if((arr[j-1]=='a'||arr[j-1]=='e')&&(arr[j+1]=='a'||arr[j+1]=='e'))
            cout<<"."<<arr[j];
            else
            cout<<arr[j];
        }
        cout<<arr[n-1]<<endl;
    }
}
int main()
{
    Language();
    return 0;
}