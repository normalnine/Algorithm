#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Member {
    int age;
    string name;
    int joinOrder;  // 가입 순서를 저장
};

// 정렬 기준: 나이 오름차순, 나이가 같으면 가입 순서 오름차순
bool compareMember(const Member &a, const Member &b) {
    if (a.age != b.age) {
        return a.age < b.age;  // 나이 오름차순
    }
    return a.joinOrder < b.joinOrder;  // 나이가 같으면 가입 순서 오름차순
}

int main() {
    int N;
    cin >> N;
    
    vector<Member> members(N);
    
    // 회원 정보 입력
    for (int i = 0; i < N; i++) {
        cin >> members[i].age >> members[i].name;
        members[i].joinOrder = i;  // 가입 순서 저장
    }
    
    // 정렬
    sort(members.begin(), members.end(), compareMember);
    
    // 정렬된 결과 출력
    for (int i = 0; i < N; i++) {
        cout << members[i].age << " " << members[i].name << "\n";
    }
    
    return 0;
}