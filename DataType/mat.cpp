//#include <stdio.h>
//#include <stdlib.h>
//#include <queue>
//
//using namespace std;
//
//typedef int element;
//
//#define MAX_VERTICES 50
//typedef struct GraphType {
//    int n;    // 정점의 개수
//    int adj_mat[MAX_VERTICES][MAX_VERTICES];
//} GraphType;
//
//bool visited[MAX_VERTICES];
//
//// 그래프 초기화
//void graph_init(GraphType* g)
//{
//    int r, c;
//    g->n = 0;
//    for (r = 0; r < MAX_VERTICES; r++)
//        for (c = 0; c < MAX_VERTICES; c++)
//            g->adj_mat[r][c] = 0;
//}
//// 정점 삽입 연산
//void insert_vertex(GraphType* g, int n)
//{
//    if (((g->n) + 1) > MAX_VERTICES) {
//        fprintf(stderr, "그래프: 정점의 개수 초과");
//        return;
//    }
//    g->n = n;
//}
//// 간선 삽입 연산
//void insert_edge(GraphType* g, int start, int end)
//{
//    if (start >= g->n || end >= g->n) {
//        fprintf(stderr, "그래프: 정점 번호 오류");
//        return;
//    }
//    g->adj_mat[start][end] = 1;
//    g->adj_mat[end][start] = 1;
//}
//
//// 인접 행렬로 표현된 그래프에 대한 너비 우선 탐색
//void bfs_mat(GraphType* g, int v)
//{
//    //아래를 완성하시오
//
//    }
//
//}
//
//// 인접 행렬로 표현된 그래프에 대한 깊이 우선 탐색
//void dfs_mat(GraphType* g, int v)
//{
//    //아래를 완성하시오
//    int w;
//         
//        visited[v]=true; // 정점v 방문 표시
//        printf("%d-> ", v); // 방문한 정점 출력
//
//        for(w=0;w<g->n;w++)
//        {
//            if(g->adj_mat[v][w] && !visited[w]) // 방문하지 않은 인접 정점 탐색
//                dfs_mat(g,w); // 정점 w에서 DFS 새로 시작
//        }
//}
//
//int main(void)
//{
//    GraphType* g;
//    g = (GraphType*)malloc(sizeof(GraphType));
//    graph_init(g);
//    insert_vertex(g, 6);
//    insert_edge(g, 0, 2);
//    insert_edge(g, 2, 1);
//    insert_edge(g, 2, 3);
//    insert_edge(g, 0, 4);
//    insert_edge(g, 4, 5);
//    insert_edge(g, 1, 5);
//
//    for (int i = 0; i < 6; i++)
//        visited[i] = false;
//    printf("깊이 우선 탐색\n");
//    dfs_mat(g, 0);
//    printf("\n\n");
//
//    for (int i = 0; i < 6; i++)
//        visited[i] = false;
//    printf("너비 우선 탐색\n");
//    bfs_mat(g, 0);
//    printf("\n");
//    free(g);
//    return 0;
//}
///*실제출력
// 깊이 우선 탐색
// 0-> 2-> 1-> 5-> 4-> 3->
//
// 너비 우선 탐색
// 0-> 2-> 1-> 5-> 4-> 3->
// Program ended with exit code: 0
//*/
///*예시 출력
//깊이 우선 탐색
//정점 0 -> 정점 2 -> 정점 1 -> 정점 5 -> 정점 4 -> 정점 3 ->
//
//너비 우선 탐색
//0  방문 -> 2 방문 -> 4 방문 -> 1 방문 -> 3 방문 -> 5 방문 ->
//계속하려면 아무 키나 누르십시오 . . .
//*/
