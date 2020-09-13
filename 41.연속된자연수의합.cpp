#include<iostream>

// 연속된 자연수의 합
// n이 주어지면 n이하의 연속된 두 개 이상의 숫자의 합으로 나타낼 수 있는 모든 경우의 수를 보여라

using namespace std;

int n;

void printAns(int from, int to) { //어디서부터 어디까지 출력하는지 넘겨받으면 출력함
	for (int i = from; i < to; i++)
		cout << i << " + ";
	cout << to << " = " << n << "\n";
}

int main()
{
	cin >> n;

	int maxi = n / 2 + 1;
	int* arr = new int[maxi];

	int sum = 0;
	for (int i = 0; i < maxi; i++) {
		sum += i + 1;
		arr[i] = sum;
	}

	for (int i = maxi - 1; i >= 2; i--) {
		for (int j = i - 2; j >= 0; j--)
			if (arr[i] - arr[j] == n) {
				printAns(j + 2, i+1);
				break;
			}
		if (arr[i] == n) printAns(1, i + 1);
	}

	return 0;
}