#include <iostream>
#include <vector>


void print_vec(std::vector<int> nums) {
    for(int num: nums) std::cout << num << std::endl;
}

// 1234 
// prefix 24 1 1 2 6
// postfix 24  24 12  8 6 

std::vector<int> productExceptSelf(std::vector<int>& nums) {
        std::vector<int> result;
        int temp = 1;
        for(int i = 0; i != nums.size(); ++i) {
            result.push_back(temp);
            temp *= nums[i];
        }

        temp = 1;

        for(int i = nums.size() -1; i != -1; --i) {
            result[i] *= temp;
            temp *= nums[i];
        }

        return result;


}


int main() {
    std::vector<int> test_case = {1,2,3,4};
    print_vec(productExceptSelf(test_case));
    return 0;
}