#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        int n = nums.size();
        int low = 0 ;
        int mid = 0 ;
        int high = n-1 ;
        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }
            else if (nums[mid]==1){
                mid++;

            }
            else{
                swap(nums[mid],nums[high]);
                high--;

            }
        }
        
    }
};
int main() {
    vector<int> nums = {2, 0, 1, 1, 0, 2};
    
    //Create an instance of Solution class
    Solution sol;
    
    sol.sortZeroOneTwo(nums);
    
    //print the array elements
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
