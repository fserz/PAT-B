# include <iostream>
using namespace std;
int M , N , A, B, C, temp;//C为&替换的值
void change(int n){
    if ( A <= n && n <= B)
    {
        printf("%03d", C);
    } else{
        printf("%03d", n);
    }
}
int main(){
    scanf("%d%d%d%d%d", &M, &N, &A, &B, &C);
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &temp);
            change(temp);
            if (j < N - 1)
                printf(" ");
            else
            printf("\n");
        }
    }
    return 0;
}