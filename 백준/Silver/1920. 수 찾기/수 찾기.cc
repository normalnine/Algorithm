#include <iostream>
#include <vector>
#include <algorithm> // sort, binary_search 사용

using namespace std;

int main()
{
    // 입출력 속도 향상을 위한 설정 (필수)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    // N개의 정수 입력받기
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    // 이진 탐색을 수행하기 위해서는 반드시 정렬이 되어 있어야 함
    sort(A.begin(), A.end());

    int M;
    cin >> M;

    // M개의 쿼리 처리
    int target;
    for (int i = 0; i < M; i++)
    {
        cin >> target;
        
        // binary_search 함수: 범위 내에 target이 존재하면 true(1), 아니면 false(0) 반환
        if (binary_search(A.begin(), A.end(), target))
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }
    }

    return 0;
}