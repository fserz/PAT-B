# include <cstdio>
    int main (){
        int maxn = 100000;
        int school[maxn] = {};
        int n, schID, score = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%d%d", &schID, &score);
            school[schID] += score;
        }
        int k = 1, M = 0;
        for(int i = 1; i <= n; i++){
            if (school[i] > M){
                M = school[i];
                k = i;
            }
        }
        printf("%d %d", k, M);
        return 0;
}