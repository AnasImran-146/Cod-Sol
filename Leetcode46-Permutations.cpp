#include<iostream>
#include<vector>
using namespace std;

void Permutations(vector<int>& nums, int pos, vector<vector<int>>& result) {
    if(pos == nums.size()) {
        result.push_back(nums);
        return;
    }
    for(int i=pos; i<nums.size(); i++) {
        swap(nums[pos], nums[i]);
        Permutations(nums, pos+1, result);
        swap(nums[pos], nums[i]);
    }
}
int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result;
    Permutations(nums, 0, result);

    for(int i=0; i<result.size(); i++){
        for(int j=0; j<result[i].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}