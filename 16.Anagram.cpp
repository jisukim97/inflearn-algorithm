#include<cstdio>
#include<algorithm>
#pragma warning(disable: 4996)

//주어진 문자열 2개가 재배열하면 같아질 수 있다면 두 문자열은 Anagram
//주의: 대소문자 구별함

using namespace std;

int main()
{
	char s1[100], s2[100];
	scanf("%s %s", &s1, &s2);

	int len = 0;
	for (int i = 0; i < 100; i++) {
		if (s1[i] == '\0')
			break;
		len++;
	}
	
	sort(s1, s1 + len);
	sort(s2, s2 + len);

	int flag = 1;
	for(int i=0; i<len; i++)
		if (s1[i] != s2[i]) {
			flag = 0;
			break;
		}

	if (flag) printf("YES");
	else printf("NO");

	return 0;
} 
