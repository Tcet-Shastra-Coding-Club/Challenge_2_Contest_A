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
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for(int &i : arr)   cin >> i;
        
        vector<int> ans;
        for(int i = 1; i < n-1; i++)
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
                ans.push_back(arr[i]);
        
        if(ans.size() > 0) {
            for(int i : ans)
                cout << i << " ";
        }
        else
        {
            cout << -1;
        }
        cout << endl;
    }
    return 0;
}