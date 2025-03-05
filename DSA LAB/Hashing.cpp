#include<iostream>
using namespace std;
int count=0;
int main()
{
int a[15];
int k=15;
int m,temp;
char y='y';
int i;
for(i=0;i<=k-1;i++)
    a[i]=-1;
while(y=='y')
 {
cout<<"Enter no.\n";
cin>>m;
count++;
temp=m;
  m=m%10;
if(m>k-1)
    m=0;
while(a[m]!=-1 && count<=k-1)
    {
    if(m>k-1)
      m=-1;
    m++;
    }
if(count==k)
    {cout<<"array is full\n";break;}
else
    a[m]=temp;
cout<<"\nContinue y/n:   ";
cin>>y;
cout<<endl;
 }
cout<<"\n\n \t\tIndex\t\tElement=\n";
for(i=0;i<=k-1;i++)
if(a[i]!=-1)
    cout<<"   \t\t"<<i<<"\t\t  "<<a[i]<<endl;
else
    cout<<"   \t\t"<<i<<"\t\t  -"<<endl;
}
