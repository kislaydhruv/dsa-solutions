#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
		string longestCommonPrefix(vector<string>& str){
            if (str.empty()) return "";
			int n = str.size();
            int m = str[0].length();
            int ind = 0;
            for(int i =0; i<m ; i++ ){
                int count=0;
                for(int j =0 ; j< n-1 ;j++){
                    if(i >= str[j+1].length() || str[j][i]!=str[j+1][i]){
                        count++;
                        break;


                    }
                }
                if(count==0){
                    ind++;

                }
                else{
                    break;

                }
            }
            return str[1].substr(0,ind);

        }
};

//more optimised method is 

class Solution1 {
public:
    string longestCommonPrefix(vector<string>& str) {
        if (str.empty()) return "";
        
        // 1. Sort the array alphabetically
        // "flight", "flow", "flower"
        sort(str.begin(), str.end());
        
        // 2. Grab the first and last strings
        string first = str.front();
        string last = str.back();
        
        int i = 0;
        
        // 3. Just compare the first and last string! 
        // If the first and last share a prefix, everything in the middle must too.
        while (i < first.length() && i < last.length() && first[i] == last[i]) {
            i++;
        }
        
        return first.substr(0, i);
    }
};

int main() {
    Solution solution;
    vector<string> input = {"dog", "cat", "animal", "monkey"};
    string result = solution.longestCommonPrefix(input);
    cout << "Longest Common Prefix: " << result << endl; // Output: "fl"
    return 0;
}

