#include<iostream> 
using namespace std;
int main() 
{ 

int a[5],i,j; 

int item; 

cout<<"Enter the array of 5 elements\n"; 

for(i=0;i<=4;i++) 

  {cin>>a[i];} 

cout<<"entered array\n"; 

for(j=0;j<=4;j++) 

  {cout<<a[j]<<'\t';} 

int n=5,k=1;   

cout<<endl<<endl; 

while(n-k!=0) 

  { 

for(i=0;i<=n-k;i++) 

  { 

if(a[i]>a[i+1]) 

{ 

int c; 

c=a[i]; 

a[i]=a[i+1]; 

a[i+1]=c; 

} 

  } 

k++; 

  } 

cout<<"\n\n\nEntered array after sorting\n"; 

for(j=0;j<=4;j++) 

  { 

cout<<a[j]<<'\t'; 

  } 

cout<<"\nEnter the element to be searched"<<endl; 

cin>>item; 

int beg=0,mid,end=4; 

mid=(beg+end)/2; 

while(beg<=end && a[mid]!=item) 

 { 

if(item<a[mid]) 

end=mid-1; 

else 

beg=mid+1; 

mid=(beg+end)/2; 

 } 
if(a[mid]==item) 

{ 

cout<<"\nThe position of the element to be searched=\n"<<mid+1; 

} 

else 

 { 

cout<<"null"; 

 } 

return 0;
} 