#include<iostream>

// 이분탐색 응용 -> 결정 알고리즘
// 뮤직비디오n개가 각 몇분인지 주어지면, 순서는 바꾸지 않고,
// 주어진 m개 앨범에 다 넣고자 한다면, 한 앨범은 최소 몇분? 

using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;

	int total = 0, longest=0;
	int *music = new int[n];
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		music[i] = tmp;
		total += tmp;
		if (tmp > longest) longest = tmp;
	}

	int ans = 1; //주어진 개수로 모두 녹화가능한 더 적은 길이의 앨범을 찾았다면 갱신
	int mini = 1, maxi = total;

	while (mini <= maxi) {
		int mid = (mini + maxi) / 2; //mid 값을 앨범 길이로 한다면
		if (mid < longest) mini = mid + 1;
		else {

			int cnt = 1; //총 필요한 앨범 수
			int len = 0;
			for (int i = 0; i < n; i++) {
				if ((len + music[i]) <= mid) //현재 앨범에 다 들어갈 때
					len += music[i];
				else { //현재 앨범에 못들어감
					cnt++;
					len = music[i];
				}
			}

			if (cnt <= m) {
				ans = mid;
				maxi = mid - 1;
			}
			else mini = mid + 1;
		}
	}

	cout << ans;

	return 0;
}