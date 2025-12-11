#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int count = 0;

    // N이 0 이상일 때까지 반복
    while (N >= 0)
    {
        // 현재 남은 무게가 5로 나누어떨어지는지 확인
        if (N % 5 == 0)
        {
            count += (N / 5); // 몫만큼 봉지 추가 (5kg 봉지들)
            cout << count << endl;
            return 0; // 프로그램 종료
        }
        
        // 5로 나누어떨어지지 않으면 3kg 봉지 하나를 사용
        N -= 3;
        count++;
    }

    // 반복문을 빠져나왔다는 것은 N이 음수가 되었다는 뜻 (정확하게 만들 수 없음)
    cout << -1 << endl;

    return 0;
}