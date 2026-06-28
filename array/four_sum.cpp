#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> final;
        
        // Edge case: need at least 4 numbers
        if (n < 4) return final; 
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < n - 3; i++){
            // 1. Skip duplicates for the first number
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            
            // Fixed loop condition: j < n - 2
            for(int j = i + 1; j < n - 2; j++){
                // 2. Skip duplicates for the second number
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;
                
                int k = j + 1;
                int l = n - 1; 
                
                while(k < l){
                    // 3. Cast to long long to prevent integer overflow
                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];

                    if(sum > target){
                        l--;
                    }
                    else if(sum < target){
                        k++;
                    }
                    else {
                        // Match found
                        final.push_back({nums[i], nums[j], nums[k], nums[l]});
                        
                        // Skip duplicates for the third and fourth numbers
                        while(k < l && nums[k] == nums[k + 1]) k++;
                        while(k < l && nums[l] == nums[l - 1]) l--;
                        
                        // 4. Move pointers ONLY when a match is found
                        k++;
                        l--;
                    }
                }
            }
        }
        return final;
    }
};
int main() {
    vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    int target = 9;
    
    // Create an instance of Solution class
    Solution sol;

    vector<vector<int>> ans = sol.fourSum(nums, target);
    
    // Print the result
    cout << "The quadruplets are: \n";
    for (auto& it : ans) {
        cout << "[";
        for (auto& ele : it) {
            cout << ele << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    
    return 0;
}