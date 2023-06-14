#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    int temp = arr[0];
    int count = 0;
    
    for(int i = 1; i<arr.size(); i++)
    {
        if(arr[i]<temp)
        {
            count = i;
            temp = arr[i];
        }
    }
    
    arr.erase(arr.begin() + count);
    
    if(arr.empty())
    {
        arr.push_back(-1);
    
    }
    answer = arr;
    return answer;
}