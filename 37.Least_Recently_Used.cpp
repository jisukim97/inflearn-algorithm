#include<iostream>

// Least Recently Used (카카오 출제 캐시문제 변형)
// 총 n개의 프로그램이 돌며 각각 데이터를 요구함
// 데이터가 캐시에 있으면 맨앞에 사용된 것을 옮기고, 캐시에 없으면 LRU를 없애고 맨 앞에 방금 사용한 것을 추가

using namespace std;

int s, n; //s:캐시 크기, n:작업의 수
int* cache;

int checkData(int data) { //현재 캐시 안에 데이터가 있는지 확인하는 함수. 있다면 위치를 반환 없으면 -1
	for (int i = 0; i < s; i++)
		if (cache[i] == data) return i;
		else if (cache[i] == 0) return -1;
	return -1;
}

void changeArr(int start, int end) { //end위치의 원소를 한칸씩 앞으로, 다른 원소들은 한칸씩 뒤로, start까지.
	//즉 start는 end가 최종으로 갈 자리
	int front = cache[end];
	for (int i = end - 1; i >= start; i--)
		cache[i + 1] = cache[i];
	cache[start] = front;
}

int main()
{
	cin >> s >> n;

	int cur = 0; //현재 캐시에 저장된 데이터 개수 
	cache = new int[s+6] {0, };

	for (int i = 0; i < n; i++) { //기본 매커니즘: 캐시에 없으면 뒤로 하나씩 밀고 맨앞에 추가
		int tmp;
		cin >> tmp; //이번에 쓰는 데이터
		int checkResult = checkData(tmp);
		if (checkResult != -1) { // Cache Hit!
			changeArr(0, checkResult);
		}
		else { // Cache Miss;;
			cache[cur] = tmp; //어차피 없어질 LRU 자리에 새로운 데이터를 넣고
			changeArr(0, cur);
			cur++;
		}
	}

	for (int j = 0; j < s; j++)
		cout << cache[j] << " ";

	return 0;
}