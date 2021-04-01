# include <cstdio>

int main(){
    int n;
    scanf("%d", &n);
    double ans = 0, v;
    for(int i = 1; i <= n; i++){
        scanf("%lf", &v);
        ans += v * i * (n + 1 - i);
        
    }

    printf("%.2f\n", ans);
    return 0;
}