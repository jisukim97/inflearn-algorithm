#include<stdio.h>
#pragma warnind(disble:4996)

using namespace std;

int count(int n) {
    int cnt = 2; //always count 1 and n itself.
    int limit=n;

    for (int i = 2; i < limit; i++) 
        if (n % i == 0) {
            int q = n / i;
            if (q == i) cnt++;
            else cnt += 2;

            limit = q;
        }

    return cnt;
}

int main() {

    int n;
    scanf("%d", &n);

    printf("1 ");
    if (n != 1)
        for (int i = 2; i <= n; i++)
            printf("%d ", count(i));
    

    return 0;
}
