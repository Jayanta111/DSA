#include<iostream>
using namespace std;
int deletionArray(int arr[],int size,int item){
    int i;
    // Search array
for(int i=0;i<size;i++)
    if (arr[i]==item)
    break;
      //Search item
    if(i<size){
        size=size-1; // reduce size of array and move all 
        // elements on space ahead 
        for(int j=0;j<size;j++)
            arr[j]=arr[j+1];
        

    
}
}

int main(){
    int arr[]={4,5,6,7,8};
    int size=5; // of array
    int item=6; //Delete item
        cout<<"Item to be delete is:\n"<<item<<endl;

    //Before Deleted array
    cout<<"Before Delete the item: \n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
    //calling the DeleteArray Function
    size=deletionArray(arr,size,item);
    cout<<"After Deleted the item:\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
return 0;


}

