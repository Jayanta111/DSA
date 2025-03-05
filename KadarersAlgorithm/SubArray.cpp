#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    //To find the subArray Start
    for(int st=0;st<n;st++){
            //To find the subArray End
        for(int end=st;end<n;end++){
                //To Print the Array
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
