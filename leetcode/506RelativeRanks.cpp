#include<bits/stdc++.h>
using namespace std;
vector<string> findRelativeRanks(vector<int>& score) {
    vector<pair<int,int>> ranks;
    vector<string> answer(score.size());
    for(int i=0; i<score.size(); i++)
    {
        ranks.push_back(make_pair(score[i],i));
    }
    sort(ranks.begin(), ranks.end(), greater<pair<int,int>>());
    for(int i = 0; i < score.size() ; i++) {
     int original_index = ranks[i].second;
     if (i == 0) {
        answer[original_index] = "Gold Medal";
     } 
     else if (i == 1) {
        answer[original_index] = "Silver Medal";
     } else if (i == 2) {
        answer[original_index] = "Bronze Medal";
     } 
     else {
        answer[original_index] = to_string(i + 1);
     }
    }
    return answer; 
}

int main()
{
    vector<int> test={10,3,8,9,4};
    for( string x : findRelativeRanks(test))
    {
        cout<<x<<" ";
    }

}