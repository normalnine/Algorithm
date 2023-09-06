#include <iostream>
#include <algorithm>

using namespace std;

int cmp(string a, string b) {
	// 1. 길이가 같다면, 사전순으로
	if (a.length() == b.length()) {
		return a < b;
	}
	// 2. 길이가 다르다면, 짧은 순으로 
	else {
		return a.length() < b.length();
	}
}

string s[20000];

int main()
{
    int n;
    
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    
    sort(s, s + n, cmp);
    
    for (int i = 0; i < n; i++) {
		// 중복된 경우 한번만 출력
		if (s[i] == s[i - 1]) {
			continue;
		}
		cout << s[i] << "\n";
	}

    return 0;
}
