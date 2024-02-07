/*

You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

*/

class Solution {
public:
    int climbStairs(int n) {
        // if(n == 1) return 1;
        // vector<int> steps(n, 0);
        // steps[0] = 1;
        // steps[1] = 2;
        // for(int i = 2; i < n; i++) {
        //     steps[i] = steps[i - 1] + steps[i - 2];
        // }
        // return steps[n - 1];

        if(n == 1) return 1;
        if(n == 2) return 2;
        int step1 = 1;
        int step2 = 2;
        int step = 0;
        for(int i = 2; i < n; i++) {
            step = step1 + step2;
            step1 = step2;
            step2 = step;
        }
        return step;
    } 
};