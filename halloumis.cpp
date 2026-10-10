#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solution(int n, int k, vector<int> vec){
    if (k >= 2)
    {
        cout<< "YES"<<endl;
    }
    else
    {
        if (is_sorted(vec.begin(), vec.end()))
        {
            cout<< "YES"<<endl;
        }
        else
        {
            cout<< "NO"<<endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    
    
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        
        
        vector<int> vec;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            vec.push_back(x);
        }
        
        solution(n, k, vec);
    }
    
    return 0;
}
