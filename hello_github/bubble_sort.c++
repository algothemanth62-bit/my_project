#include<bits/stdc++.h>
void bubble(int a[],int n)
{
 for(int i=n-1;i>=1;i--)
{
 int flag=0;
 for(int j=0;j<i;j++)
  {
   if(a[j]>a[j+1])
     {
       swap(a[j],a[j+1]);
       flag=1;
     }
}
if(flag==0)
   break;
}
}
int main()
{
  int n;
cout<<"enter the n value";
cin>>n;
cout<<"enter the elements";
int a[n];
for(int i=0;i<n;i++)
{
 cin>>a[i];
}
 bubble(a,n);
cout<<"sorted array";
for(int c:a)
   cout<<c<<" ";
}
