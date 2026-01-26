// The sum of digits of a number eventually reduces to a value between 1 and 9, called the digital root.
// Digital Root = 1 + (num − 1) % 9
class Solution {
public:
    int addDigits(int num) {
        if(num == 0)
            return 0;
        if(num%9 == 0)
            return 9;
        
        return num%9;
    }
};

// Reference - https://youtu.be/urZ7Jj2UXp0?si=VqwPVQL8__8qEBUc
