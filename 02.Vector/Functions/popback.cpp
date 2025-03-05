#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(25);
    vec.push_back(75);
    vec.push_back(85);
    vec.push_back(55);
    vec.push_back(95);
    vec.push_back(35);

   
 cout<<"After push back:"<<vec.size()<<endl;
  vec.pop_back();
  
    for(int val:vec){
        cout<<val<<endl;
    }
    cout<<"After pop the front value is: ";
    cout<<vec.front()<<endl;
    return 0;
}