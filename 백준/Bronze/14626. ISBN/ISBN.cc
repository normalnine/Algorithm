#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string isbn;
    cin >> isbn;

    int current_sum = 0;
    int star_multiplier = 0;

    // ISBN 문자열을 순회
    for (int i = 0; i < 13; i++)
    {
        // 가중치 결정: 짝수 인덱스(0, 2...)는 1, 홀수 인덱스(1, 3...)는 3
        int weight = (i % 2 == 0) ? 1 : 3;

        if (isbn[i] == '*')
        {
            // * 위치의 가중치를 저장
            star_multiplier = weight;
        }
        else
        {
            // 숫자인 경우 정수로 변환하여 가중치를 곱해 합산
            current_sum += (isbn[i] - '0') * weight;
        }
    }

    // 0부터 9까지 넣어보며 조건(총합 % 10 == 0)을 만족하는 숫자 찾기
    for (int i = 0; i <= 9; i++)
    {
        if ((current_sum + i * star_multiplier) % 10 == 0)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}