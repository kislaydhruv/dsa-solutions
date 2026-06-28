#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int low = 0;

        for (int index = 0 ; index<nums.size() ;index++){
            if(nums[index]!= 0 ){
                swap(nums[index],nums[low]);

                low++;

            }

        }
        
    }
};
int main(){
    vector<int> nums = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};

    //Create an instance of Solution class
    Solution sol;

    sol.moveZeroes(nums);

    cout << "Array after moving zeroes: ";
    // Print the modified array
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;

}