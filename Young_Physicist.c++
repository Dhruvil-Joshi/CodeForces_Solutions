#include <iostream>
using namespace std;
int main() {
    int n,count1=0,count2=0,count3=0;
    cin>>n;
  int a[100][3];
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<3;j++)
      {
        cin>>a[i][j];
      }
  }
  for(int i=0;i<n;i++)
  {
      count1=count1+a[i][0];
      count2=count2+a[i][1];
      count3=count3+a[i][2];
  }
  if((count1==count2)&&(count2==count3)&&(count3==0))
  {
      cout<<"YES";
  }
  else
  {
      cout<<"NO";
  }
    return 0;
}