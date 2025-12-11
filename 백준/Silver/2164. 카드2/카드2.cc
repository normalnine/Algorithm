#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // 입출력 속도 향상
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    queue<int> q;

    // 1부터 N까지 큐에 저장 (1이 맨 앞, N이 맨 뒤)
    for (int i = 1; i <= N; i++)
    {
        q.push(i);
    }

    // 카드가 한 장 남을 때까지 반복
    while (q.size() > 1)
    {
        // 1. 제일 위에 있는 카드를 바닥에 버린다.
        q.pop();

        // 2. 그 다음, 제일 위에 있는 카드를 제일 아래로 옮긴다.
        int top_card = q.front(); // 현재 맨 앞 카드 확인
        q.pop();                  // 맨 앞 제거
        q.push(top_card);         // 맨 뒤로 삽입
    }

    // 마지막 남은 카드 출력
    cout << q.front() << "\n";

    return 0;
}