#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>

bool isMatchingPair(char left, char right) {
    return (left == '(' && right == ')') ||
        (left == '[' && right == ']') ||
        (left == '{' && right == '}');
}

bool isBalanced(const std::string& expr) {
    std::stack<char> st;
    for (char ch : expr) {
        // 如果是左括号，压栈
        if (ch == '(' || ch == '[' || ch == '{') {
            st.push(ch);
        }
        // 如果是右括号
        else if (ch == ')' || ch == ']' || ch == '}') {
            // 栈空：右括号多余
            if (st.empty()) return false;
            // 弹出栈顶并检查是否匹配
            char top = st.top();
            st.pop();
            if (!isMatchingPair(top, ch)) return false;
        }
        // 其他字符忽略（可选，根据需求决定是否忽略）
    }
    // 遍历完所有字符后，栈空表示全部匹配
    return st.empty();
}

int main() {
    std::string tests[] = { "()", "()[]{}", "(]", "([)]", "{[]}", "" };
    for (const auto& s : tests) {
        std::cout << s << " : " << (isBalanced(s) ? "匹配" : "不匹配") << std::endl;
    }
    return 0;
}