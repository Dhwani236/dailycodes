#include<bits/stdc++.h>
using namespace std;
set<int> findingduplicates(vector<int> &arr)
{
    unordered_map<int,int> frequency;
    set<int> duplicates;
    for(int x : arr){
        frequency[x]++;
        if(frequency[x]>1)
        duplicates.insert(x);
    }
    return duplicates;
}
int main(){
    cout<<"Enter the size of your array:";
    int size;
    cin>>size;
    vector<int> array(size);
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    cout<<"repeating numbers from the given array are:\n";
    for(int y: findingduplicates(array))
    {
        cout<<y<<" ";
    }
}