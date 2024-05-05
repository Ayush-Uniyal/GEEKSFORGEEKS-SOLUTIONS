//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int n) {
       // Compute digit sum
        int digitSum = 0;
        while (n) {
            digitSum += n % 10;
            n /= 10;
        }
        
        // Compute reverse of digit sum
        int reverse = 0;
        int temp = digitSum;
        while (temp) {
            int digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp /= 10;
        }
        
        // Check if digit sum is palindrome
        return (digitSum == reverse) ? 1 : 0;
    }
      
      
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends