#include<bits/stdc++.h>
using namespace std;
vector<int> leaders(vector<int>& arr) {
        vector<int> leaderz;
        int i,j;
        for(i=0; i<arr.size(); i++)
        {
            for (j=i+1; j<arr.size(); j++)
            {
                if(!(arr[i]>=arr[j]))
                break;
            }
            if(j==arr.size())
            leaderz.push_back(arr[i]);
        }
        return leaderz;
    }
int main()
{
    vector<int> test={16,17,4,3,5,2};
    cout<<"Array Leaders from given array are:\n";
    for(int x:leaders(test)) {
        cout<<x<<" ";
    }
    return 0;
}
