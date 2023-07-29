#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define all(nums)    nums.begin(), nums.end()

int main() {
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for(int &i : arr)   cin >> i;
        
        sort(all(arr));
        int ans = 0;
        
        for(int i = 1; i < n; i++)
        {
            if(arr[i] <= arr[i-1])
            {
                ans += arr[i-1] - arr[i] + 1;
                arr[i] = arr[i-1] + 1;
            }
        }
        
        cout << ans << endl;   
    }
    return 0;
}