// problem link - https://leetcode.com/problems/find-subsequence-of-length-k-with-the-largest-sum/

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {

        // Sort by value descending
        auto lambda1 = [](const pair<int,int>& a, const pair<int,int>& b) {
            return a.first > b.first;
        };

        // Sort by index ascending
        auto lambda2 = [](const pair<int,int>& a, const pair<int,int>& b) {
            return a.second < b.second;
        };

        vector<pair<int,int>>numWithThierIndices;
        for(int i=0;i<nums.size();i++){
            numWithThierIndices.push_back({nums[i],i});
        }

        sort(numWithThierIndices.begin(), numWithThierIndices.end(),lambda1); // Sort by value descending

        // Take top k and sort by original index
        vector<pair<int, int>> topK(numWithThierIndices.begin(), numWithThierIndices.begin() + k);
        sort(topK.begin(),topK.end(),lambda2);

        vector<int>result;
        for(auto x:topK){
            result.push_back(x.first);
        }

        return result;

    }
};
