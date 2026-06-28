#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map <int,int> mpp;
        int C ;
        for(int index=0 ; index<n;index++){
            C = target - nums[index];
            if(mpp.find(C)!=mpp.end()){
                return { index , mpp[C]};

            }
            mpp[nums[index]] =index;

        }
        return {};
        

        
    }
};
int main(){
    int n = 5;
    vector<int> nums = {2, 6, 5, 8, 11};
    int target = 14;
    
    // Create an instance of the Solution class
    Solution sol;
    
    // Call the twoSum method to find the indices
    vector<int> ans = sol.twoSum( nums, target);
    
    // Print the result
    cout << "This is the answer: [" << ans[0] << ", " << ans[1] << "]" << endl;
    
    return 0;


}