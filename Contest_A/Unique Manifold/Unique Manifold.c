#include <stdio.h>

void main() {
    int t;
    scanf("%d", &t);

    while (t > 0) {
        int n;
        scanf("%d", &n);

        int arr[100]; // Assuming the maximum size of the array is 100
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        // Sort the array using bubble sort (or any other sorting algorithm)
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        int ans = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] <= arr[i - 1]) {
                ans += arr[i - 1] - arr[i] + 1;
                arr[i] = arr[i - 1] + 1;
            }
        }

        printf("%d\n", ans);
        t--;
    }
}
