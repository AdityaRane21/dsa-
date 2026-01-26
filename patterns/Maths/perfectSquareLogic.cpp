// for number other than perfect squares, their multiples are in even number of pairs
// and for perfect squared numbers, multiples are in odd number of pairs

// 319. Bulb Switcher
// here in this question even times agr toggle hua means bulb off hai 
// aur agr odd times toggle hua means bulb on hai (perfect square number wali case)

class Solution {
public:
    int bulbSwitch(int n) {
        return sqrt(n); // count how many perfect squares ≤ n, which is floor(sqrt(n)) 
        // eg for n=20 // root of 20 is approx 4.something which rounds off to 4, and there are 4 perfect squares which are below 20 - 1,4,9,16
    }
};


// we can calculate perfect squares using loop also
class Solution {
public:
    int bulbSwitch(int n) {
        int count = 0;
        for (int i = 1; i * i <= n; i++) {
            count++;
        }
        return count;
    }
};
