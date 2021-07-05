#include<stdio.h>
#pragma warnind(disble:4996)

using namespace std;

int main() {

    char words[100], result[100];
    gets(words);

    int i = 0, pos=0; 
    char tmp = words[i];
    for (; tmp != '\0'; tmp=words[++i]) {
        if (tmp >= 97) //small
            result[pos++] = tmp;
        else if (tmp < 97 && tmp >=65) //large
            result[pos++] = tmp + 32;
    }

    result[pos] = '\0';
    printf("%s\n", result);

    return 0;
}
