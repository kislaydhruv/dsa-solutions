#include<bits/stdc++.h>
using namespace std;
//approach one my first thought 
// problem is time complexity and stoic cannot work with big strings
class Solution{
    public :
    string largeOddNum(string& s){
        int n = stoi(s);
        vector<char> m;
        if(n==0){
            string g = "Error";
            return g ;

        }
        else{
            while(n>0){
                if((n%10)%2==0){
                    n/=10;

                }
                else{
                    while(n>0){
                        m.push_back((n%10)+'0');
                        n/=10;
                    }
                }
            }

        }
        string k(m.rbegin(),m.rend());
        return k;

        

    }
};
class Solution2{
    public:
    string largeOddNum(string& s){
        for(int i = s.length();i>=0;i--){
            if(s[i]!=0){
                return s.substr(0,i+1);

            }

        }
        return "";






    }

};


int main() {
    Solution2 solution;
    string num = "5347";
    string result = solution.largeOddNum(num);
    cout << "Largest odd number: " << result << endl;
    return 0;
}