#include<stdio.h>
#pragma warnind(disble:4996)

using namespace std;

int ctoi(char a) {
    return a - 48;
}

int count(int n) {
    int i=1, cnt = 2; //already including 1 and n at start

    for (int j = ++i; i * j != n; i++) 
        if (n % i == 0)
            cnt++;
    
    return ++cnt;
}

int main() {

    char str[50];
    int cnt =0, sum = 0;
    scanf("%s", &str);

    int i = 0;
    char tmp = str[i];
    for (; tmp != '\0'; tmp=str[++i])
        if (tmp > 47 && tmp < 58) {
            sum *= 10;
            sum += ctoi(tmp);
        }
    
    printf("%d\n%d", sum, count(sum));

    return 0;
}
