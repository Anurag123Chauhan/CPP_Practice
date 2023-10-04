//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int priority(char &c){
        if (c=='M'){
            return 7;
        }
        else if (c=='D') return 6;
        else if (c=='C') return 5;
        else if (c=='L') return 4;
        else if (c=='X') return 3;
        else if (c=='V') return 2;
        else if (c=='I') return 1;
        else{
            return 0;
        }
    }
    int value(char &c){
        if (c== 'M'){
            return 1000;
        }
        else if (c=='D') return 500;
        else if (c=='C') return 100;
        else if (c=='L') return 50;
        else if (c=='X') return 10;
        else if (c=='V') return 5;
        else if (c=='I') return 1;
        else{
            return 0;
        }
    }
    int romanToDecimal(string str) {
        int ans = 0;
        int prevValue = 0;
        for (char c : str) {
            int currValue = value(c);
            if (currValue > prevValue) {
                ans += currValue - 2 * prevValue;
            } else {
                ans += currValue;
            }
            prevValue = currValue;
        }
        return ans;
    }

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends