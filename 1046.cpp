# include<cstdio>
int main(){
    int n, a1, a2, b1, b2, x = 0, y= 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d%d%d%d", &a1, &a2, &b1, &b2);
        if(a1 + b1 == a2 && a1 + b1 != b2)//甲胜
            y++;
        else if(a1 + b1 == b2 && a1 + b1 != a2)//乙胜
            x++;
    }
    printf("%d %d", x, y);
    return 0;
}