// LC 692 Top K frequent Words
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;

        for(string &word:words){
            mp[word]++;
        }

        // store the string with their occurences in vec
        vector<pair<string,int>>vec;
        for(auto &it:mp){
            vec.push_back({it.first,it.second});
        }

        // sort using custom comparator lambda
        auto lambda =[](pair<string,int>&p1,pair<string,int>&p2){
            if(p1.second==p2.second){
                return p1.first<p2.first;
            }
            return p1.second > p2.second;
        };
        sort(vec.begin(),vec.end(),lambda);

        // pick top k freq words
        int i=0;
        vector<string>res(k);
        while(i<k){
            res[i]=vec[i].first;
            i++;
        }

        return res;

    }
};
