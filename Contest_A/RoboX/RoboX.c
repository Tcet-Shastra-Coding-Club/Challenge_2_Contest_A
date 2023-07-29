#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, p;
        scanf("%d %d", &n, &p);

        char str[100];
        scanf("%s", str);

        int ans = (p % 2 == 0 ? 1 : 0);
        for (int i = 0; i < n; i++) {
            if (str[i] == 'R')
                p++;
            else if (str[i] == 'L')
                p--;

            if (p % 2 == 0)
                ans++;
        }

        printf("%d\n", ans);
    }

    return 0;
}
