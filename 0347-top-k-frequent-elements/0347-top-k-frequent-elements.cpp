class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map <int,int> map;
    vector <int> frequent;

        for(int i=0; i<nums.size(); i++){
            map[nums[i]]++;
        }

    priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minHeap;

        for(auto i=map.begin(); i!=map.end(); i++){
            minHeap.push({i->second, i->first});

            if(minHeap.size() > k){
                minHeap.pop();
            }
        }

        while(minHeap.size() > 0){
            frequent.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return frequent;
    }
};