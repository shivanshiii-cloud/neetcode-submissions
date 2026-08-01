class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result;

        for(int i = 0; i <= n; i++) {
            int num = i;          // copy of i
            int count = 0;        // reset count

            while(num != 0) {
                num = num & (num - 1);  // remove last set bit
                count++;                // count it
            }

            result.push_back(count);
        }

        return result;
    }
};