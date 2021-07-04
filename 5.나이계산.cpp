#include<stdio.h>
#pragma warnind(disble:4996)
using namespace std;

//주민등록 번호가 주어지면 나이(2019년 기준)와 성별을 출력하시오.
  
int ctoi(char a) {
    return a - 48;
}

int calculate_age(int b, int s) {
    int year;
    if (s <= 2) //1900년생
        year = 1900 + b;
    else //2000년생
        year = 2000 + b;
    return 2019 - year + 1;
}

int main() {

    int age, birth;
    char sex; 
    char id[20];
    scanf("%s", &id);

    sex = ctoi(id[7]) % 2 == 0 ? 'W' : 'M';
    birth = ctoi(id[0]) * 10 + ctoi(id[1]);
    age = calculate_age(birth, ctoi(id[7]));

    printf("%d %c", age, sex);

    return 0;
}
