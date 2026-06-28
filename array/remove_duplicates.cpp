#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return 1;

        }
        int count=1;
        for(int index = 1 ; index<n;index++){
            if(nums[index]!=nums[index-1]){
                nums[count]=nums[index];

                count++;
                
            }

        }
        return count;
        
        
    }
};
void printArray(vector<int> &nums, int n) {
    for(int i=0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}


int main(){
    vector<int> nums = {1, 1, 2, 2, 2, 3, 3};
    
    cout << "Original Array: ";
    printArray(nums, nums.size());
    
    // Create an instance of the Solution class
    Solution sol;
    
    // Function call to remove duplicates from array
    int k = sol.removeDuplicates(nums);
    
    cout << "Array after removing the duplicates: ";
    printArray(nums, k);
    
    return 0;

}