#include<stdio.h>
#pragma warnind(disble:4996)
using namespace std;

//�ֹε�� ��ȣ�� �־����� ����(2019�� ����)�� ������ ����Ͻÿ�.
  
int ctoi(char a) {
    return a - 48;
}

int calculate_age(int b, int s) {
    int year;
    if (s <= 2) //1900���
        year = 1900 + b;
    else //2000���
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
