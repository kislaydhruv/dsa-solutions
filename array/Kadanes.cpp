#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max_count=INT_MIN ;
        int count=0 ;
        for(int i = 0 ; i<n ; i++){
            count+=nums[i];
            max_count = max(count,max_count);
            if(count<0){
                count = 0;
                continue ;
            }
            

            
        }
        return max_count ;

        
    }
};
int main() {
    vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    
    //create an instance of Solution class
    Solution sol;
    
    int maxSum = sol.maxSubArray(arr);
    
    //Print the max subarray sum
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}
