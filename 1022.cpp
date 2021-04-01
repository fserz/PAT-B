# include <cstdio>
int main()
{
    int a, b, d;
    scanf("%d%d%d", &a, &b, &d);
    int sum = a + b;
    int num[31],k=0;
    do{
        num[k++] = sum % d;
        sum /= d;
    }while(sum != 0);
    for(int i = k - 1; i >= 0; i--)
    printf("%d", num[i]);
    return 0;
}