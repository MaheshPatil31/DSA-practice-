class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        for (int num : nums)
            freq[num]++;

        map<int, vector<int>, greater<int>> temp;

        for (auto x : freq)
            temp[x.second].push_back(x.first);

        vector<int> ans;

        for (auto x : temp) {

            for (int num : x.second) {

                ans.push_back(num);

                if (ans.size() == k)
                    return ans;
            }
        }

        return ans;
    }
};
