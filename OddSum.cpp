#include<iostream>
using namespace std;
int main()
{
int i,n;
int sum=0;
cout<<"Enter any N number:\n";
cin>>n;
for(i=1;i<=n;i++)
{
    if (i%2!=0)
    {
       sum+=i; /* code */
    }
    
    
}
cout<<"The sum of Odd number is:"<<sum<<endl;
return 0;
}