#include<bits/stdc++.h>
using namespace std;

int secondlargest(vector<int> &arr)
{
   sort(arr.begin(), arr.end(), greater<int>());
   if(arr[0]>arr[1])
   return arr[1];

   for(int i=1; i<arr.size(); i++)
   {
      if(arr[0]>arr[i])
      return arr[i];
   }

   return -1;
}
int main()
{
    vector<int> arr;
    int temp,n;
    cout<<"Enter the total elements for the vector:";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"second largest element in the given array is:\n";
    cout<<secondlargest(arr);
}