//Quite Complex But Faster Approach With Space Saving
#include<bits/stdc++.h>
using namespace std;
 
void Three_Activities()
{
    int len;
    cin>>len;
    for(int y=0;y<len;y++)
    {
        long long int n;
        cin>>n;
        long long int a[3][2]={{-1,0},{-1,0},{-1,0}};
        long long int b[3][2]={{-1,0},{-1,0},{-1,0}};
        long long int c[3][2]={{-1,0},{-1,0},{-1,0}};
        for(long long int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            if(temp>a[2][0])
            {
                a[0][0]=a[1][0];
                a[0][1]=a[1][1];
                a[1][0]=a[2][0];
                a[1][1]=a[2][1];
                a[2][0]=temp;
                a[2][1]=i;
            }
            else if(temp>a[1][0])
            {
                a[0][0]=a[1][0];
                a[0][1]=a[1][1];
                a[1][0]=temp;
                a[1][1]=i;
            }
            else if(temp>a[0][0])
            {
                a[0][0]=temp;
                a[0][1]=i;
            }
        }
        for(long long int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            if(temp>b[2][0])
            {
                b[0][0]=b[1][0];
                b[0][1]=b[1][1];
                b[1][0]=b[2][0];
                b[1][1]=b[2][1];
                b[2][0]=temp;
                b[2][1]=i;
            }
            else if(temp>b[1][0])
            {
                b[0][0]=b[1][0];
                b[0][1]=b[1][1];
                b[1][0]=temp;
                b[1][1]=i;
            }
            else if(temp>b[0][0])
            {
                b[0][0]=temp;
                b[0][1]=i;
            }
        }
        for(long long int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            if(temp>c[2][0])
            {
                c[0][0]=c[1][0];
                c[0][1]=c[1][1];
                c[1][0]=c[2][0];
                c[1][1]=c[2][1];
                c[2][0]=temp;
                c[2][1]=i;
            }
            else if(temp>c[1][0])
            {
                c[0][0]=c[1][0];
                c[0][1]=c[1][1];
                c[1][0]=temp;
                c[1][1]=i;
            }
            else if(temp>c[0][0])
            {
                c[0][0]=temp;
                c[0][1]=i;
            }
        }
            int max=0;
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    for(int k=0;k<3;k++)
                    {
                        if(a[i][1]!=b[j][1] && c[k][1]!=b[j][1] && a[i][1]!=c[k][1])
                        {
                            if(a[i][0]+b[j][0]+c[k][0]>max)
                            max=a[i][0]+b[j][0]+c[k][0];
                        }
                    }
                }
            }
            cout<<max<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Three_Activities();
    return 0;
}

// Easier but Slower Approach Also More Save
//
// #include<bits/stdc++.h>
// using namespace std;
 
// void Three_Activities()
// {
//     int len;
//     cin>>len;
//     for(int y=0;y<len;y++)
//     {
//         long long int n;
//         cin>>n;
//         vector<vector<long long int>> a;
//         vector<vector<long long int>> b;
//         vector<vector<long long int>> c;
//         for(long long int i=0;i<n;i++)
//         {
//             long long int temp;
//             cin>>temp;
//             a.push_back({temp,i});
//         }
//         for(long long int i=0;i<n;i++)
//         {
//             long long int temp;
//             cin>>temp;
//             b.push_back({temp,i});
//         }
//         for(long long int i=0;i<n;i++)
//         {
//             long long int temp;
//             cin>>temp;
//             c.push_back({temp,i});
//         }
//         sort(a.begin(),a.end());
//         sort(b.begin(),b.end());
//         sort(c.begin(),c.end());

//         if(a[n-1][1]!=b[n-1][1] && b[n-1][1]!=c[n-1][1] && a[n-1][1]!=c[n-1][1])
//         cout<<a[n-1][0]+b[n-1][0]+c[n-1][0]<<endl;
//         else
//         {
//             int max=0;
//             for(int i=n-1;i>n-4;i--)
//             {
//                 for(int j=n-1;j>n-4;j--)
//                 {
//                     for(int k=n-1;k>n-4;k--)
//                     {
//                         if(a[i][1]!=b[j][1] && c[k][1]!=b[j][1] && a[i][1]!=c[k][1])
//                         {
//                             if(a[i][0]+b[j][0]+c[k][0]>max)
//                             max=a[i][0]+b[j][0]+c[k][0];
//                         }
//                     }
//                 }
//             }
//             cout<<max<<endl;
//         }
//     }
// }
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     Three_Activities();
//     return 0;
// }