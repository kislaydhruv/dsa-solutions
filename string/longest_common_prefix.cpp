#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
		string longestCommonPrefix(vector<string>& str){
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
int main() {
    Solution solution;
    vector<string> input = {"dog", "cat", "animal", "monkey"};
    string result = solution.longestCommonPrefix(input);
    cout << "Longest Common Prefix: " << result << endl; // Output: "fl"
    return 0;
}

