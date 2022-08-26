#include <iostream>
#include <vector>
#include <unordered_set>

void print_vec(std::vector<int> nums) {
    for(int num: nums) std::cout << num << std::endl;
}

int longestConsecutive(std::vector<int>& nums) {
        std::unordered_set<int> new_set(nums.begin(), nums.end());
        std::vector<int> result;
        std::vector<int> temp;
        for(int num: new_set) {
            if(new_set.find(num - 1) != new_set.end()) {
                if(result.size() < temp.size()) result = temp;
                temp = {};
            }
        }
    }

int main() {
    std::vector<int> test_case = {100,4,200,1,3,2};
    print_vec(longestConsecutive(test_case));
    return 0;
}