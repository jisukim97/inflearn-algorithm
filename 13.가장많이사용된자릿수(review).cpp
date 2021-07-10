#include<stdio.h>
#pragma warning(disable:4996)

int main() {

	int max_num=0, max_cnt = 0, i=0;
	int cnt[10] = { 0, };
	char a[101], tmp;
	scanf("%s", &a);

	tmp = a[i];
	for (; tmp != '\0'; tmp = a[++i]) 
		cnt[tmp - 48]++;
	

	max_cnt = cnt[0];
	max_num = 0;
	for (int i = 1; i < 10; i++)
		if ((max_cnt < cnt[i]) || (max_cnt == cnt[i] && max_num < i)) {
			max_cnt = cnt[i];
			max_num = i;
		}

	printf("%d", max_num);
	return 0;
}
