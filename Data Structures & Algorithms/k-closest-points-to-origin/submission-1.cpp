class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> pq; // max-heap

        for (auto &p : points) {
            int dist = p[0] * p[0] + p[1] * p[1];
            pq.push({dist, p});
            if (pq.size() > k) pq.pop(); // keep only k closest
        }

        vector<vector<int>> result;
        while (!pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};
