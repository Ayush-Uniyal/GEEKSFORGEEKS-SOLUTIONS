//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
    
    stack<int>s;
    int n=0;
    while(n<k){
        int element=q.front();
        q.pop();
    s.push(element);

    n++;
        // add code here.
    }
    while(!s.empty()){
        int element=s.top();
        q.push(element);
        s.pop();
    }
    int t=q.size()-k;
    while(t--){
        int value=q.front();
        q.pop();
        q.push(value);
    }
    return q;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends