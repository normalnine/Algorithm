#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 정렬 기준을 정의하는 비교 함수
bool comparePoints(const pair<int, int>& a, const pair<int, int>& b)
{
    if (a.second != b.second)
    {
        return a.second < b.second; // y좌표(second)가 다르면 y좌표 기준 오름차순
    }
    return a.first < b.first; // y좌표가 같으면 x좌표(first) 기준 오름차순
}

int main()
{
    // 입출력 속도 향상
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<pair<int, int>> points(N);

    for (int i = 0; i < N; i++)
    {
        cin >> points[i].first >> points[i].second; // x, y 입력
    }

    // 커스텀 비교 함수(comparePoints)를 사용하여 정렬 수행
    sort(points.begin(), points.end(), comparePoints);

    for (int i = 0; i < N; i++)
    {
        cout << points[i].first << " " << points[i].second << "\n";
    }

    return 0;
}