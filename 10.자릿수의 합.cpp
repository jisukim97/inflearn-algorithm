#include<stdio.h>
#pragma warning(disable:4996)

using namespace std;

int max_origin;

int digit_sum(int x) {
    int sum = 0, r, q;
    int origin = x;

    while (1) {
        r = x % 10;
        q = x / 10;

        if (q > 0) {
            sum += r;
            x = q;
        }
        else {
            sum += r;
            break;
        }
    }

    return sum;
}

int main() {

    int n, max, max_origin, tmp;
    scanf("%d", &n);

    scanf("%d", &tmp);
    max = digit_sum(tmp);
    max_origin = tmp;

    for (int i = 1; i < n; i++) {
        scanf("%d", &tmp);
        if (max < digit_sum(tmp) || (max == digit_sum(tmp) && tmp > max_origin)) {
            max_origin = tmp;
            max = digit_sum(tmp);
        }
    }

    printf("%d", max_origin);

    return 0;
}
