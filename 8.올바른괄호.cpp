#include<stdio.h>
#pragma warnind(disble:4996)

using namespace std;

int main() {

   	int i = 1, cnt = 1, flag = 1;
	char str[30];
	scanf("%s", &str);

	//first one has to be '('
	char tmp = str[0];
	if (tmp != '(') flag = 0;

	for (; flag != 0 && tmp != '\0'; tmp = str[++i]) {
		if (tmp == '(') cnt++;
		else if (tmp == ')') cnt--;
		
		// cnt with a minus value means it is already wrong. it means there are too many ) before ( comes.
		if (cnt < 0) flag = 0;
	}

	if (flag == 1 && cnt ==0) printf("YES");
	else printf("NO");

    return 0;
}
