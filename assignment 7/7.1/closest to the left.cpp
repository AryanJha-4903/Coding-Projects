#include <bits/stdc++.h>
using namespace std; 
int __my_lower_bound(int inp[], int n, int target)
{
    int l = -1, r = n; 
    while (r - l > 1) {
        int mid = l + (r - l) / 2;
        if (target <= inp[mid])
            r = mid;
        else
            l = mid;
    }

    return r;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int inp[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &inp[i]);

    for (int i = 0; i < k; i++) {
        int num;
        scanf("%d", &num);

        printf("%d\n", __my_lower_bound(inp, n, num + 1));
    }

    return 0;
}
