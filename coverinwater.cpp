#include <iostream>
#include <string>

using namespace std;

int solution(string s) {
    int freq = 0;
    int count = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '.') {
            freq++;
            count++;
            
            
            if (freq == 3) {
                return 2;
            }
        } 
        else {
            freq = 0;
        }
    }
    return count;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s; 
        cout << solution(s) << "\n";
    }
    
    return 0;
}