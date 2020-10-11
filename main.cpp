#include <iostream>
#include <forward_list>
#include <stack>

using namespace std;

void question_1();
void question_2();
int main() {
    question_2();
}

void question_1() {
    forward_list<char> list{'x', 'y', 'z', 'z', 'y', 'x'};
    stack<char> stack;
    for (const auto &item : list) {
        stack.push(item);
    }
    bool flat{true};
    for (const auto &item : list) {
        if (item != stack.top()) {
            flat = false;
        }
        stack.pop();
    }
    cout << "是否是回文串?" << flat << endl;
}

void question_2() {
    forward_list<char> list{'(', '(', 'z', 'x', ')', ')', 'x'};
    stack<char> stack;
    for (const auto &item : list) {
        if (item == '('){
            stack.push(item);
        }else if(item==')'){
            stack.pop();
        }
    }
    cout << "是否匹配?" << stack.empty() << endl;
}