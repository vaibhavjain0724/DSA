//!Q-136 leetcode, single number

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){

            xorr = xorr ^ nums[i];
        }
        return xorr;
    }
};

// !! XOR (Exclusive OR)

// The XOR (^) operator compares corresponding bits of two numbers:
// *If bits are different, the result is 1.
// *If bits are same, the result is 0.
// Truth Table:

// A	B	A ^ B
// 0	0	0
// 0	1	1
// 1	0	1
// 1	1	0

// Common Uses:

//* Swapping values without a temp variable:

// x = x ^ y;
// y = x ^ y;
// x = x ^ y;


// *Finding unique elements in arrays where all others appear twice.

//* 0 ^ 5 = 5
//* 5 ^ 5 = 0

// ! Key Note: XOR with 0 gives the number itself, and XOR with the number itself gives 0.
