#include<bits/stdc++.h>
using namespace std;
void selection(int a[],int n)
{
 int min,j;
  for(int i=0;i<n-1;i++)
  {
    min=i;
   for( j=i;j<n;j++)
   {
     if(a[j]<a[min])
      {
        min=j;
      }
   }
   int t=a[i];
   a[i]=a[min];
   a[min]=t;
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
selection(a,n);
for(int c:a)
  cout<<c<<" ";
}
 
 
