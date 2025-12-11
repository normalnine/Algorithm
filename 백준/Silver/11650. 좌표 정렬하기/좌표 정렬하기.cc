#include <iostream>
#include <vector>
#include <algorithm> // sort 함수 사용을 위해 필요

using namespace std;

int main()
{
    // 입출력 속도 향상을 위한 설정
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    // x, y 좌표를 쌍으로 저장하기 위한 vector 생성
    vector<pair<int, int>> points(N);

    for (int i = 0;  i < N; i++)
    {
        // first는 x좌표, second는 y좌표로 입력 받음
        cin >> points[i].first >> points[i].second;
    }

    // 정렬 수행
    // pair의 기본 정렬 기준: 첫 번째 원소(first) 기준 오름차순, 
    // 같을 경우 두 번째 원소(second) 기준 오름차순
    sort(points.begin(), points.end());

    // 결과 출력
    for (int i = 0; i < N; i++)
    {
        // endl 대신 "\n"을 사용하여 출력 버퍼 비우는 시간 절약
        cout << points[i].first << " " << points[i].second << "\n";
    }

    return 0;
}