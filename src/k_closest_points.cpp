#include <iostream>
#include <vector>
#include <queue>


std::vector<std::vector<int>> kClosest(std::vector<std::vector<int>>& points, int k) {
        std::vector<std::vector<int>> result;
        auto custom_com = [](std::vector<int> a, std::vector<int> b) {return (a[0]*a[0] + a[1]*a[1]) > (b[0]*b[0] + b[1]*b[1]);};
        std::priority_queue<std::vector<int>, std::vector<std::vector<int>>, decltype(custom_com)> pq(points.begin(), points.end(), custom_com);
        
        
        for(int i = 0; i != k; ++i) {
            result.push_back(pq.top());
            pq.pop();

        }
        
        
        return result;
    }

int main() {
    std::vector<std::vector<int>> test_case = {{1,3},{-2,2}};
    std::vector<std::vector<int>> res = kClosest(test_case, 1);
    std::cout << res.size() << std::endl;
    return 0;
}