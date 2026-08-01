#include<bits/stdc++.h>
using namespace std;
// vector<int> leaders(vector<int>& arr) {
//         vector<int> leaderz;
//         int i,j;
//         for(i=0; i<arr.size(); i++)
//         {
//             for (j=i+1; j<arr.size(); j++)
//             {
//                 if(!(arr[i]>=arr[j]))
//                 break;
//             }
//             if(j==arr.size())
//             leaderz.push_back(arr[i]);
//         }
//         return leaderz;
//     }

// since the above approach had nested loops the time complexity was O(nsquare)

// optimised approach

vector<int> leaders( vector<int> &arr){
    vector<int> leaderz;
    leaderz.push_back(arr[arr.size()-1]); //last element by default leader haisej hamesha
    int newleader=arr[arr.size()-1]; //initialising the first leader
    for(int i=arr.size()-2 ; i>=0 ; i++) //since the last element is not to be checked, we begin from the second last index and go all the way till the first element (right to left)
    {
        if(arr[i]>newleader)
        {
            newleader=arr[i];
            leaderz.push_back(newleader);

        }
    }
    // right side thi maximum element ni value newleader ma aavti jaase, 
    // and that value will be compared against the current value we are checking is a leader or not or our current potential leader. 
    // previous logic e hatu ke aapde potential leader na right ma badhi values check karaavta ke enathi nani che ke nai.
    // updated logic e che ke agar aapda potential leader na right ma savthi moti value goti levani, ne eni sathej ene compare karvanu.
    // because potential leader ni right side agar 3 values che ne tranei mathi highest 5 che toh if potential leader candidate
    // is actually leader than it will be larger than 5. ne agar it's larger than 5 toh it will naturally be larger than the rest two values.
    // larger than larger will naturally be larger than smaller vado concept. 
    // potential leader element ni right ma agar ekoi value evi aavi gai ke je enathi moti haise toh biji values check akrva ni jarur j nathi 
    // that is the main logic here. etle aapde right side thi maximum value got-ta aaviye chhiye. 


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


