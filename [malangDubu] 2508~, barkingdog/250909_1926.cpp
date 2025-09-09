//바킹독을 참고하여 코딩 : https://blog.encrypted.gg/941

#include <iostream>
#include <algorithm>
#include <utility>
#include <queue>
using namespace std;

int board[502][502]; //전체 그림 판
int vis[502][502]; //방문한 칸 모음
int dx[4] = {1,0,-1,0}; //x축으로의 이동
int dy[4] = {0,1,0,-1}; //y축으로의 이동

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    //도화지 정보 받기
    int n, m; cin >> n >> m; //세로 n, 가로 m 도화지 (mxn)
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> board[i][j];
        }
    }

    int mx=0; //도화지에 있는 가장 큰 그림의 크기
    int num=0; //도화지에 있는 그림의 수

    //도화지를 순회 (bfs)
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            //그림이 아닌 칸, 이미 방문한 칸은 확인하지 않는다.
            if (board[i][j] == 0 || vis[i][j] == 1) continue;

            num++;
            queue<pair<int, int>> q;
            vis[i][j] = 1; //정점을 방문했다는 정보 저장
            q.push(make_pair(i,j));
            int area = 0; //현재 탐색하는 그림의 크기

            while(!q.empty()) {
                area ++;
                pair<int, int> cur = q.front(); q.pop(); //front를 꺼내기
                //탐색하는 정점 기준 상하좌우 정점 확인
                for (int dir=0; dir<4; dir++) {
                    int nx= cur.first + dx[dir];
                    int ny = cur.second + dy[dir];
                    if (nx<0 || nx >= n || ny<0 || ny >=m) continue; //도화지를 벗어나는 크기 pass
                    if (vis[nx][ny] ==1 || board[nx][ny] != 1) continue; //이미 방문했거나 그림이 아닌 정점 pass
                    vis[nx][ny] =1;
                    q.push(make_pair(nx,ny));
                }
            }

            mx = max(mx, area);
        }
    }
    cout << num << "\n" << mx;
    return 0;
}
