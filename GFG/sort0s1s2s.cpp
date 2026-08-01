#include<bits/stdc++.h>
using namespace std;
vector<int> sort012(vector<int>& arr) {
        // code here
        int count0,count1,count2;
        count0=count1=count2=0;
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]==0)
            count0++;
            if(arr[i]==1)
            count1++;
            if(arr[i]==2)
            count2++;
        }
        int i=0;
        while(i<count0)
        {
            arr[i]=0;
            i++;
        }
        int n=i;
        i=0;
        while(i<count1)
        {
            arr[n]=1;
            n++;
            i++;
        }
        i=0;
        while(i<count2)
        {
            arr[n]=2;
            n++;
            i++;
        }
    return arr;
}
int main()
{
    cout<<"Enter the size of your array:";
    int size;
    cin>>size;
    vector<int> test(size);
    for(int i=0; i<size; i++)
    {
        cin>>test[i];
    }
    for( int x : sort012(test))
    {
        cout<<x<<" ";
    }
}