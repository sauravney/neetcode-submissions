class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        map<int, int> m;

        // Count frequency of each element
        for (int num : nums) {
            m[num]++;
        }

        // Store frequency and element in pairs
        vector<pair<int, int>> v;

        for (auto it : m) {
            v.push_back({it.second, it.first});
        }

        // Sort by frequency in descending order
        sort(v.begin(), v.end(), greater<pair<int, int>>());

        // Store the top k frequent elements
        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }

        return ans;
    }
};
