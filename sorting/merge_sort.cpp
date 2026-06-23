#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    void merge_unite(vector<int>& arr,int low,int high,int mid){
        int left = low;
        int right=mid+1;
        vector<int> temp;
        while(left<=mid&&right<=high){
            if (arr[left]<arr[right]){
                temp.push_back(arr[left]);
                left++;


            }
            else{
                temp.push_back(arr[right]);
                right++;

            }


        }
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;

        }
        for(int i = low; i<=high;i++){
            arr[i]=temp[i-low];

        }


    }
    void merge_divide(vector<int>& arr, int low, int high){
        if(low>=high){
            return;
        }
        int mid = low+(high-low)/2;
        merge_divide(arr,low,mid);
        merge_divide(arr,mid+1,high);
        merge_unite(arr,low,high,mid);




    }
public:
    vector<int> mergeSort(vector<int>& nums) {
        int n = nums.size();
        merge_divide(nums,0,n-1);

        return nums;


    }
};

int main(){
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    int n = arr.size();

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Create an instance of the Solution class
    Solution sol;
    // Function call to sort the array
    vector<int> sortedArr = sol.mergeSort(arr);

    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++)
        cout << sortedArr[i] << " ";
    cout << endl;

    return 0;


}