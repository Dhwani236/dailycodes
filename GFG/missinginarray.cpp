// logic kth index upar k+1 value haise
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    int size;
    cout<<"Enter the total elements in the array:";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    for(int i=0 ; i<size ; i++)
    {
        if(i+1!=arr[i]) {
          cout<< i+1;
          break;
        }
        if(i==size-1) {
            cout<< size+1;
            break;
        } 
    }
}