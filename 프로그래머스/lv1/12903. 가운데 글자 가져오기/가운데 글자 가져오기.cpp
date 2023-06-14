#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
return s.substr((s.size() - 1) / 2, 2 - s.size() % 2);
    
    //return answer;
}