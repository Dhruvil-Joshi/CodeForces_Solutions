#include<iostream>
using namespace std;
bool checkdig(int n)
{
   int a[10]={0};
   int d;
   while(n>0)
   {
      d=n%10;
      if(a[d]!=0)
      return false;
      a[d]++;
      n/=10;
   }
   return true;
}
int main()
{
   int n;
   int a[4];
   cin>>n;
   n++;
   while(!checkdig(n))
   {
      n++;
      if(n==INT64_MAX)
      break;
   }
   cout<<n;
   return 0;
}