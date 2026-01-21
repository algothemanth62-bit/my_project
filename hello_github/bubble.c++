#include<bits/stdc++.h>
using namespace std;
void bubble(int a[],int n)
{
  for(int i=n-1;i>=1;i--)
  {
   for(int j=0;j<=i-1;j++)
   {
    if(a[j]>a[j+1])
    {
     int t=a[j];
     a[j]=a[j+1];
     a[j+1]=t;
    }
   }
  }
 }
int main()
{
int n;
cout<<"enter the size:";
cin>>n;
int a[n];
cout<<"enter the values:";
for(int i=0;i<n;i++)
{
  cin>>a[i];
}
bubble(a,n);
for(int c:a)
  cout<<c<<" ";
}
 
 
