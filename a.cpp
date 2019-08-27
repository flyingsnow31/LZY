#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,a[1001],i,j,m,r=0,l=0;
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
sort(a,a+n);
for(i=0;i<n;i++)
{
r=l=0;
m=a[i];
for(j=i-1;j>=0;j--)
{
if(a[j]<m)
{
l=j+1;
break;
}
}
for(j=i+1;j<n;j++)
{
if(a[j]>m)
{
r=n-j;
break;
}
}
if(r==l)
{
cout<<m;
return 0;
}
}
cout<<-1;
}
