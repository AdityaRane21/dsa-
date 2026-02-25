class Solution {
public:
    static bool compare(int a,int b){
        int bitCountA = __builtin_popcount(a);
        int bitCountB = __builtin_popcount(b);

        // If the number of set bits is the same for a and b, compare them numerically
        if (bitCountA == bitCountB) {
            return a < b;
        }

        return bitCountA < bitCountB; // sort by number of bits in asc order
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),compare);

        return arr;
    }
};
