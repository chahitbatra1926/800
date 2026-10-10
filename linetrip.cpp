#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, int k, vector <int>&v){
    int a=0;
    int s = v.size();
    for(int i = 1; i < s; i++){
        int d = v[i] - v[i-1];
        a = max(a,d);
}
int b = v[0];
int c = 2*(k-v[s-1]);
return max(a, max(b, c));
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
        
        int ans = solution(n, k, vec);
        cout << ans << endl;
    }
    
    return 0;
}

