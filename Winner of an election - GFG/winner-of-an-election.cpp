//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        unordered_map<string, int>umap;
        for(int i = 0; i < n; i++){
            umap[arr[i]]++;
        }
        string name = "";
        int max_votes = 0;
        for(auto itr = umap.begin(); itr != umap.end(); itr++){
            string a = itr->first;
            int b = itr->second;
            if(b > max_votes){
                max_votes = b;
                name = a;
            }
            else if(b == max_votes){
                if(a < name){
                    name = a;
                }
            }
        }
        vector<string>ans;
        ans.push_back(name);
        string temp = to_string(max_votes);
        ans.push_back(temp);
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends