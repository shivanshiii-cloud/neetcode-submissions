class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        // Count frequency
        for (int x : nums) {
            freq[x]++;
        }

        vector<int> ans;

        // Find maximum frequency k times
        for (int i = 0; i < k; i++) {

            int maxFreq = 0;
            int maxElement = 0;

            for (auto p : freq) {
                if (p.second > maxFreq) {
                    maxFreq = p.second;
                    maxElement = p.first;
                }
            }

            ans.push_back(maxElement);

            // Remove so we don't select it again
            freq.erase(maxElement);
        }

        return ans;
    }
};