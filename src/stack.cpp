#include <iostream>
#include <vector>

class Stack {
    private:
        std::vector<int> stack;
    public:
        void push(int a) {
            stack.push_back(a);
        }

        int pop() {
            int res = stack[-1];
            stack.pop_back();
            return res;
        }

};

int main() {
    Stack s;
    s.push(1234);
    int hello = s.pop();
    std::cout << hello << std::endl;
    return 0;
}