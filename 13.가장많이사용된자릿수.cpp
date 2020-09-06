#include<iostream>
#include<algorithm>

//들어오는 수에 가장 많이 사용된 숫자digit을 출력하기
//주의: 사용된 횟수가 같은 수가 여러 개면, 가장 큰 것 출력
//주의2: 입력값이 100자리 이하이므로, string으로 받아야 가능함

using namespace std;

typedef pair<int, int> Pair;

bool cmp(Pair a, Pair b) {
	if (a.second != b.second) return a.second > b.second;
	else return a.first > b.first;
}

int main()
{
	string n;
	cin >> n;

	Pair* arr = new Pair[10];

	for (int i = 0; i <= 9; i++)
		arr[i] = make_pair(i, 0);

	int index = 0;
	int slen = n.size();
	int one;
	do{
		one = n[index] - '0';
		arr[one].second++;
		index++;
	} while (index<slen);

	sort(arr, arr + 10, cmp);

	cout << arr[0].first;

	return 0;
}