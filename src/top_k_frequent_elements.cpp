#include <iostream>
#include <queue>
#include <unordered_map>

void print_vec(std::vector<int> nums) {
    for(int num: nums) std::cout << num << std::endl;
}

std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
    std::unordered_map<int, int> tracker;
    std::vector<int> result;
    for(int num: nums) ++tracker[num];

    auto custom_comp = [](std::pair<int, int>& a,  std::pair<int, int>& b) {return a.second < b.second;};

    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, decltype(custom_comp)> pq(custom_comp);

    for(std::unordered_map<int, int>::const_iterator iter = tracker.begin(); iter != tracker.end(); ++iter) {
        pq.push(*iter);
    }

    for(int i = 0; i < k; ++i) {
        result.push_back(pq.top().first);
        pq.pop();
        }

    return result;
}

int main() {

    std::vector<int> test = {1,1,1,2,2,3};
    std::cout << topKFrequent(test, 2).front() << std::endl;
    return 0;
}