// 1 + 0 // sum=1 sum%2=1 // so ans is 1
// 0 + 1 // sum=1, sum%2==1 // so ans is 1
// 1 + 1 // sum=2, sum%2==0 // ans is 0 // carry 1 
/// carry 1 + // 1 + 1 // sum=3, sum%2==1 // ans is 1 // carry 1 
class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
        int sum=0;

        string res="";

        int i=a.size()-1;
        int j=b.size()-1;

        while(i>=0 || j>=0){

            sum=carry;

            if(i>=0){
                sum+= (a[i] - '0');
                i--;
            }

            if(j>=0){
                sum+= (b[j] - '0');
                j--;
            }

            if(sum%2==0) res.push_back('0');
            else res.push_back('1');

            if(sum>1) carry =1;
            else carry =0;

        }

        if(carry==1) res.push_back('1');

        reverse(res.begin(),res.end());

        return res;
    }
};