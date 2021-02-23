#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

int map[51][51];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

int main(){

    int n, i, j, cnt=0;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1; j<=n; j++){
            scanf("%d", &map[i][j]);
        }
    }

    for(i=1;i<=n;i++){
        for(j=1; j<=n; j++){
            int flag = 1; // 1 when (i,j)is top
            int cri = map[i][j]; //criterion
            for(int k=0; k<4; k++){
                if(cri<=map[i+dx[k]][j+dy[k]]) {
                    flag =0;
                    break;
                }
            }
            if(flag) cnt++;
        }
    }

    printf("%d",cnt);

    return 0;
}