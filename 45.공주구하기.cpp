#include<iostream>
#include<climits>

// 조세퍼스 문제
// n명의 왕자가 있고 k번째 있는 왕자는 공주 구하기에서 제외된다. 마지막 남아 공주를 구하러 가는 1명은?

using namespace std;

int n, k;
int* princes;

int removeK(int start) {
	int i = 0;

	while (1) { 
		if (princes[start] != 1) i++;
		if (i == k) break;

		if (++start == n) start = 0;
	}
	return start;
}

int main()
{
	cin >> n >> k;
	princes = new int[n] {0, }; //제외된 왕자는 1로 값이 바뀐다.
	int index = 0;

	for (int i = 1; i < n; i++) {
		index = removeK(index);
		princes[index++] = 1;
		if(index==n) index=0;
	}
	
	for(int i=0; i<n;i++)
		if (princes[i] != 1) {
			cout << i + 1;
			break;
		}

	return 0;
}