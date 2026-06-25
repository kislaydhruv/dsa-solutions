#include<bits/stdc++.h>
using namespace std;
class solution{
    public:

    int mostFrequentElement(vector<int> &nums){

        int n = nums.size();
        //we will need the vector length a lot of times
        int maxFreq=0;
        //to count and compare the frequency of the repeated elements 
        int maxElem;
        //to store the maximum element 

        vector<bool> visited(n,false);
        //created a visited to see we mark the repeated element and don't count them twice 

        //first loop to create the first itterator 
        for(int i =0; i<n ; i++){
            //skip the second loop if already counted(visited) 
            if(visited[i]) continue;
            //variable to store the frequency of the current elements
            int freq = 0;

            for(int j=i;j<n;j++){
                if (nums[i] == nums[j]){
                    freq++;
                    visited[j]=true;

                }

            }
            if(freq>maxFreq){
                maxFreq=freq;
                maxElem=nums[i];

            }
            else if(freq==maxFreq){
                maxElem=min(maxElem, nums[i]);

            }

        }
        return maxElem;



    }

};

class Solution{
    public:
    int r_element(vector<int>& nums){
        unordered_map<int,int> freqMap;

        int maxFreq=0;
        int mostFrequesnt=0;
        int Second_frequent;
        for(int num : nums){
            freqMap[num]++;

            if(freqMap[num]>maxFreq){
                
                mostFrequesnt=num;
                maxFreq=freqMap[num];

            }
            else if(freqMap[num]==maxFreq){
                mostFrequesnt=min(mostFrequesnt,num);
            }
        }
        return mostFrequesnt;
    
    }
    



};

int main(){
    vector<int> nums = {4, 4, 5, 5, 6};
    
    /* Creating an instance of 
    Solution class */
    solution sol; 
    
    /* Function call to get the
    highest occurring element in array nums */
    int ans = sol.mostFrequentElement(nums);
    
    cout << "The highest occurring element in the array is: " << ans;
    
    return 0;
}

