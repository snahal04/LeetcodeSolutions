/*
Given an integer x, return true if x is a palindrome, and false otherwise.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
*/

//Solution in CPP
class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        string k=s;
        reverse(s.begin(),s.end());
        if(s==k){
            return 1;
        }
        else{
            return 0;
        }
        // cout<<s<<endl;
        return 0;
    }
};
