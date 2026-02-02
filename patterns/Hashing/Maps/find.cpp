class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;

        int n1=nums1.size();
        int n2=nums2.size();

        for(int i=0;i<n1;i++){
            mp1[nums1[i]]++;
        }
        for(int i=0;i<n2;i++){
            mp2[nums2[i]]++;
        }

        int count1=0;
        for(auto &it:mp1){
            if(mp2.find(it.first) != mp2.end()){
                count1 += it.second;
            }
        }
        int count2=0;
        for(auto &it:mp2){
            if(mp1.find(it.first) != mp1.end()){
                count2 += it.second;
            }
        }

        return{count1,count2};

    }
};