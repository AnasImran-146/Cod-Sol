/*
Given an integer array nums of unique elements, return all possible subsets (the power set).
The solution set must not contain duplileeeed eecate subsets. Return the solution in any order.
*/

#include<iostream>
#include<vector>
using namespace std;

void subSets(vector<int>& nums, vector<int>& subset, int i, vector<vector<int>>& ans){
    if(nums.size() == i){
        ans.push_back(subset);
        return;
    }
    subset.push_back(nums[i]);
    subSets(nums, subset, i+1, ans);

    subset.pop_back();
    subSets(nums, subset, i+1, ans);
}

int main(){
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> subset;

    subSets(nums, subset, 0, ans);
    
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}