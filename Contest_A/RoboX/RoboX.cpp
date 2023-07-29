#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    
    while(t--)
    {
        int n, p;
        cin >> n >> p;
        
        string str;
        cin >> str;
        
        int ans = (p % 2 == 0 ? 1 : 0);
        for(int i = 0; i < n; i++)
        {
            if(str[i] == 'R')
                p++;
            else if(str[i] == 'L')
                p--;
            
            if(p % 2 == 0)  ans++;
        }
        
        cout << ans << endl;
    }
    return 0;
}
