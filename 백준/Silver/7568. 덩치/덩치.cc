#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<pair<int, int>> people(n);
    
    for (int i = 0; i < n; i++) 
    {
        cin >> people[i].first >> people[i].second;
    }
    
    vector<int> ranks(n, 1);
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (i != j && people[j].first > people[i].first && people[j].second > people[i].second) 
            {
                ranks[i]++;
            }
        }
    }
    
    for (int rank : ranks) 
    {
        cout << rank << " ";
    }
    cout << endl;
    
    return 0;
}