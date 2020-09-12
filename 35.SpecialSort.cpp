#include <iostream>

// Special Sort (Google interview)
// 주어진 순서는 그대로 두되, 음수는 앞으로 양수는 뒤로 정렬한 스페셜 솔팅을 구현하라.

using namespace std;

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < (n - 1); i++)
        for (int j = 0; j < (n - i - 1); j++)
        {
            if (arr[j] < 0)
                continue;
            if (arr[j + 1] < 0)
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}