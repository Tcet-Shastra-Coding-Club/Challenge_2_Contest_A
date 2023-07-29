#include <stdio.h>
#include <stdlib.h>

void findLocalMaxima(int *arr, int n) {
    int *ans = (int *)malloc(n * sizeof(int));
    int ansCount = 0;
    
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            ans[ansCount] = arr[i];
            ansCount++;
        }
    }
    
    if (ansCount > 0) {
        for (int i = 0; i < ansCount; i++)
            printf("%d ", ans[i]);
    } else {
        printf("-1");
    }
    printf("\n");
    
    free(ans);
}

int ma