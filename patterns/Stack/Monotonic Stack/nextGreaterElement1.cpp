class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> nextGreater; // store next greater for nums2
        stack<int> st;

        // Step 1: Find next greater element for each number in nums2
        for (int i = nums2.size() - 1; i >= 0; i--) {

            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }

            if (st.empty())
                nextGreater[nums2[i]] = -1;
            else
                nextGreater[nums2[i]] = st.top();

            st.push(nums2[i]);
        }

        // Step 2: Build answer for nums1 using map
        vector<int> result;
        for (int x : nums1) {
            result.push_back(nextGreater[x]);
        }

        return result;
    }
};
