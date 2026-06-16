#include<bits/stdc++.h>
using namespace std;
//Given an array of integers, find the contiguous subarray with the largest sum and return that sum

void vector1(int arr[], int n ){
    vector<int> v(arr,arr+n);
    // we copied the elements of the array arr into the vector v by using the constructor of the vector which takes two parameters, the first parameter is the pointer to the first element of the array and the second parameter is the pointer to the last element of the array plus one.
    int current_sum = 0;
    int max_sum = INT_MIN;
    //INT_MIN is the minimum value of an integer which is -2^31 and we are using it to initialize the max_sum variable because we want to find the maximum sum of a subarray and if we initialize it with 0 then it will not work because if all the elements of the array are negative then the maximum sum of a subarray will be negative and it will be less than 0 so we have to initialize it with INT_MIN to handle this case.
    for(auto it =v.begin();it!=v.end();it++){
        current_sum += *it;
        //it is an iterator not an index because it's not an integer variable, it's a pointer to the element of the vector and we have to dereference it to get the value of the element.
        max_sum = max(max_sum,current_sum);
        if(current_sum<0){
            current_sum = 0;
        }
    }
    cout<< max_sum<<endl;



}
//Given an integer array nums, rotate the array to the right by k steps in-place
void vector2(vector<int>& nums, int k){
    int n = nums.size();
    k = k%n;
    // we are taking the modulus of k with n because if k is greater than n then rotating the array k times will be the same as rotating the array k%n times because after n rotations the array will be back to its original position.
    for( int m =0 ;m<k;m++){
        int last = nums[n-1];
        for(int i=n-1;i>0;i--){
            nums[i] = nums[i-1];
        }
        nums[0] = last;

    }

}
void vector3(vector<int>& v, int target){
    int n = v.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j]==target){
                cout<<i<<" "<<j<<endl;
                return;
            }
        }
    }

}
string longestPalindrome(string s) {
    int n = s.size();
    string result = "";

    for (int i = 0; i < n; i++) {

        // Case 1: Odd length palindrome — centered at i
        // e.g. "aba" → center is 'b'
        int left = i, right = i;
        while (left >= 0 && right < n && s[left] == s[right]) {
            left--;
            right++;
        }
        // after loop, left and right have gone one step too far
        string oddPalin = s.substr(left + 1, right - left - 1);
        if (oddPalin.size() > result.size()) result = oddPalin;

        // Case 2: Even length palindrome — centered between i and i+1
        // e.g. "abba" → center is between the two b's
        left = i;
        right = i + 1;
        while (left >= 0 && right < n && s[left] == s[right]) {
            left--;
            right++;
        }
        string evenPalin = s.substr(left + 1, right - left - 1);
        if (evenPalin.size() > result.size()) result = evenPalin;
    }

    return result;
}

void string1(string s, string t){
    if(s.size()!=t.size()){
        cout<<"false"<<endl;
        return;
    }
    // when we want to check if two strings are anagrams of each other then we can sort both the strings and then compare them because if two strings are anagrams of each other then they will have the same characters in the same frequency but the order of the characters can be different so if we sort both the strings then they will be in the same order and we can compare them easily.      
    
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

}
int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector1(arr, n);
    return 0 ;

}