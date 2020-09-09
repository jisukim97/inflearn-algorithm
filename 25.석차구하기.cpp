#include<iostream>
#include<algorithm>
#include<string>

//석차 구하기: N명의 수학점수가 입려고디면 석차를 입력된 순서대로 출력하는 프로그램

using namespace std;

int main()
{
	int n;
	cin >> n;

	int* score = new int[n];
	int* grade = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> score[i];
		grade[i] = 1;
	}

	for (int i = 0; i < n; i++) {
		int cur_score = score[i]; //비교대상이 되는 점수
		for (int j = 0; j < n; j++) 
			if (cur_score > score[j]) grade[j]++;
	}

	for (int i = 0; i < n; i++)
		cout<< grade[i]<<" ";

	return 0;
}
