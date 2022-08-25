#include <iostream>
#include <queue>

std::priority_queue<int> push_values(std::vector<int> nums) {
    std::priority_queue<int> pq;
    for(int num: nums) {
        pq.push(num);
    }

    return pq;
}

 std::priority_queue<int, std::vector<int>, std::greater<int>> push_values_greater(std::vector<int> nums) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
    for(int num: nums) {
        pq.push(num);
    }

    return pq;
}


template<typename T>
void print_values(T pq) {
    while(!pq.empty()) {
        std::cout << pq.top() << "->";
        pq.pop();

    }
    std::cout << std::endl;
}



int main() {
    std::vector<int> test_case = {1,2,3,4};

    std::priority_queue<int> pq = push_values(test_case); 

    std::priority_queue<int, std::vector<int>, std::greater<int>> pq1 = push_values_greater(test_case); 

    auto custom_compare = [](int a, int b){return a < b;};


    std::priority_queue<int, std::vector<int>, decltype(custom_compare)> pq2(custom_compare);

    pq2.push(100);
    pq2.push(32);
    pq2.push(21);
    pq2.push(11);


    print_values(pq);

    print_values(pq1);

    print_values(pq2);
    // std::priority_queue<int, std::vector<int>, std::greater<int>> ascending;

    return 0;
}