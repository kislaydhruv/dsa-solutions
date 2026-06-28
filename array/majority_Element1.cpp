#include<bits/stdc++.h>
using namespace std ;

//This is also known as Boyer-Moore algorithm 


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int reqEle = nums[0];
        int count = 1 ;
        for(int index = 1 ; index<n ; index++){
            if(nums[index]!=reqEle){
                count--;
                if(count==0){
                    reqEle=nums[index];
                    count=1;

                }

            }
            else{
                count++;

            }
        }
        return reqEle ;

        
    }
};
int main() {
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    
    // Create an instance of Solution class
    Solution sol;
 
    int ans = sol.majorityElement(arr);
    
    // Print the majority element found
    cout << "The majority element is: " << ans << endl;
    
    return 0;
}
