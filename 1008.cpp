# include<cstdio>
int main(){
    int n, m, count;
    int a[100];
    scanf("%d%d", &n , &m);
     m = m % n;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = n - m; i <= n - 1;i++){
        printf("%d", a[i]);
    count++;
        if(count < n)
            printf(" ");
    }
    for(int i = 0; i <= n - m - 1; i++)
    {
        printf("%d", a[i]);
        count++;
        if(count < n)
            printf(" ");
    }
    return 0;
}