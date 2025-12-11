#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    // 입출력 속도 향상
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (true)
    {
        string line;
        getline(cin, line); // 공백 포함 한 줄 입력

        // 종료 조건: 입력 줄에 점 하나만 있는 경우
        if (line == ".")
        {
            break;
        }

        stack<char> s;
        bool isBalanced = true;

        for (char c : line)
        {
            // 여는 괄호일 경우 스택에 저장
            if (c == '(' || c == '[')
            {
                s.push(c);
            }
            // 닫는 소괄호일 경우
            else if (c == ')')
            {
                // 스택이 비어있거나 짝이 안 맞으면 실패
                if (!s.empty() && s.top() == '(')
                {
                    s.pop();
                }
                else
                {
                    isBalanced = false;
                    break;
                }
            }
            // 닫는 대괄호일 경우
            else if (c == ']')
            {
                // 스택이 비어있거나 짝이 안 맞으면 실패
                if (!s.empty() && s.top() == '[')
                {
                    s.pop();
                }
                else
                {
                    isBalanced = false;
                    break;
                }
            }
        }

        // 반복문 종료 후, 오류가 없었고 스택이 비어있어야(모두 짝을 맞춤) yes
        if (isBalanced && s.empty())
        {
            cout << "yes\n";
        } else
        {
            cout << "no\n";
        }
    }

    return 0;
}