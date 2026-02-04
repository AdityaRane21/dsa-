class Solution {
  public:
    vector<int> leftSmaller(vector<int> arr) {

        int n = arr.size();
        vector<int> ans(n, -1);

        stack<int> st;

        for(int i = 0; i < n; i++) {

            // Remove elements >= current element
            while(!st.empty() && st.top() >= arr[i]) {
                st.pop();
            }

            // Top will be nearest smaller element
            if(!st.empty()) {
                ans[i] = st.top();
            }

            // Push current element for future
            st.push(arr[i]);
        }

        return ans;
    }
};
