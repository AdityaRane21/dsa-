class Solution {
public:
    bool hasAlternatingBits(int n) {
        bitset<32> b(n); // converts decimal to bit format
        int bits = log2(n); // to get the highest set bit // we took highest set bit as uske aageka kuch kaam ka nahi hai 

        // we need to iterate till bits // i.e till the highest set bit
        for(int i = 0; i<=bits; i++) {
            if(b[i] == b[i+1]) return false;
        }
        return true;
    }
};