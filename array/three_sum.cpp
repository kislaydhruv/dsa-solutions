#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> final ;
        for(int i = 0 ; i< n-2 ; i++){
            if(i!= 0 && nums[i]==nums[i-1]){
                continue;
            }

            int j = i+1;
            int k = n-1;
            
            

            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum>0){
                    k--;

                }
                else if(sum<0){
                    j++;
                }
                else{
                    final.push_back({nums[i],nums[j],nums[k]});

                    // Skip duplicates for the second element (j)
                    while(j < k && nums[j] == nums[j + 1]){
                        j++;
                    }
                    // Skip duplicates for the third element (k)
                    while(j < k && nums[k] == nums[k - 1]){
                        k--;
                    }
                    j++;
                    k--;



                }


            }

            
            
           

        }
        return final ;

            



        
    }
};

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    // Create an instance of Solution class
    Solution sol;

    vector<vector<int>> ans = sol.threeSum(nums);

    // Print the result
    for (auto& triplet : ans) {
        cout << "[";
        for (auto& num : triplet) {
            cout << num << " ";
        }
        cout << "] ";
    }
    cout << "\n";

    return 0;
}
