class Solution {
public:
    unordered_map<uint32_t, uint32_t> cache;
    
    uint32_t reverseBits(uint32_t n) {
        if(cache.count(n)) return cache[n];
        
        uint32_t result = 0;
        for(int i = 0; i < 32; i++) {
            result = (result << 1) | (n & 1);
            n >>= 1;
        }
        
        return cache[n] = result;
    }
};