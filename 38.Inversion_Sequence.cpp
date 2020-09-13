#include<iostream>
#include<algorithm>

// Inversion Sequence
// 1~n까지 각각의 수 앞에 놓여있는 자신보다 큰 수의 개수를 수열로 표현한 것이 Inversion Sequence
// inversion sequence가 주어졌을 때 기존의 수열을 구하라.

using namespace std;


int main()
{
	int n;
	cin >> n;

	int* original = new int[n + 5];
	fill(original, original + n, 100);

	for (int i = 1; i <= n; i++) {
		int tmp;
		int bigger_N = 0;
		cin >> tmp;
		int j = 0;
		if (tmp > 0) {
			for (j = 0; j < (n - 1); j++) {
				if (i >= original[j])continue; //자신보다 작은 수가 나오면 bigger_N을 카운트 하지 않음
				bigger_N++; //bigger_N을 +1 한 후

				if (bigger_N == tmp) {
					j++;
					break;
				}
			}
		}
		//bigger_N과 tmp를 더이상 체크할 필요가 없다면
		//자신보다 작은 수가 나오지 않는 지점에 i를 넣어준다.
		for (; j < n; j++)
			if (i < original[j]) break;

		original[j] = i;

	}

	for (int k = 0; k < n; k++)
		cout << original[k] << " ";


	return 0;
}