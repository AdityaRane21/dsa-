class Solution {
  public:
  
    void generate(int n, string current, vector<string> &ans) {
        if (current.length() == n) {
            ans.push_back(current);   
            return;
        }

        generate(n, current + "0", ans);
        generate(n, current + "1", ans);
    }
    
    vector<string> binstr(int n) {
        vector<string> ans;          
        generate(n, "", ans);
        return ans;                
    }
};