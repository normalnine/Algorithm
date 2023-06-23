#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    int i;
    int three = 1;
    int temp;
    vector<int> arr;
    
    for(i=0; three*3<=n; i++)
    {
        three*=3;
    }    
    
    for(int j=0; j<=i; j++)
    {
        if(n == 0)
        {
            arr.push_back(0);
        }
        else
        {
            arr.push_back(n/three);
             n-=three * (n/three);
            three/=3;
        }
    }
    
    three = 1;
    
    for(int k = 0; k<arr.size()/2; k++)
    {
        temp = arr[k];
        arr[k] = arr[arr.size()-1-k];
        arr[arr.size()-1-k] = temp;
    }
    
    for(int k = 0; k<arr.size(); k++)
    {
        answer += arr[arr.size()-1-k] * three;
        three*=3;
    }
    return answer;
}