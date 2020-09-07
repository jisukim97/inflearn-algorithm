#include<iostream>

// 총 10번 카드를 뒤집어 승점이 높은 사람이 이김.
// 각 회차에 더 큰 수가 나오는 사람이 승점+3, 비기면 둘 다 +1점
// 승점이 같다면, last winner가 이 게임의 승자

using namespace std;

int main()
{
	int score_A=0, score_B=0;
	int last_winner = 'D';

	int* A = new int[10];
	int* B = new int[10];

	for (int i = 0; i < 10; i++)
		cin >> A[i];

	for (int i = 0; i < 10; i++)
		cin >> B[i];

	for (int i = 0; i < 10; i++) {
		if (A[i] > B[i]) {
			score_A += 3;
			last_winner = 'A';
		}
		else if (B[i] > A[i]) {
			score_B += 3;
			last_winner = 'B';
		}
		else {
			score_A++;
			score_B++;
		}
	}

	cout << score_A << " " << score_B << "\n";
	cout << (char)last_winner;

	return 0;
}
