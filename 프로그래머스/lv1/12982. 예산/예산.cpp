#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> d, int budget) 
{
    int answer = 0;
    int count = 0;
    
    sort(d.begin(), d.end());
    
    for(int i; i<d.size(); i++)
    {
        if(budget-d[i] >=0)
        {
            budget-=d[i];
            count++;
        }
    }
   
    return count;
}