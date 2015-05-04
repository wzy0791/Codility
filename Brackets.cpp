#include <algorithm>
#include <stack>

bool isValidPair(char left, char right) {
    if ( left == '(' && right == ')' ) return true;
    if ( left == '[' && right == ']' ) return true;
    if ( left == '{' && right == '}' ) return true;
    return false;
}

int solution(string &S) {
    // write your code in C++11
    if (S.empty()) return 1;
    if (S.size() == 1) return 0;
    stack<char> brackets;
    brackets.push(S[0]);
    for (auto i = S.begin()+1; i != S.end(); i++) {
        if (brackets.empty()) {
            brackets.push(*i);
            continue;
        }
        if (!isValidPair(brackets.top(), *i)) {
            brackets.push(*i);
        } else {
            brackets.pop();
        }
    }
    return brackets.empty() ? 1 : 0;
}
