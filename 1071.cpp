# include<iostream>
using namespace std;
int main(){
    int T, k, n1, b, t, n2, ans;
    scanf("%d%d", &T, &k);
    for (int i = 0; i < k; i++)
    {
        scanf("%d%d%d%d", &n1 ,&b ,&t ,&n2);
        ans = n1 > n2 ? 0 : 1;
        if (T == 0)
        {
           printf("Game Over.\n");
           break;
        }else if (t > T)//几种情况结果是互斥的，所以要用else if
        {
            printf("Not enough tokens.  Total = %d.\n", T);
        }else if (b == ans)
        {
            T += t;
            printf("Win %d!  Total = %d.\n", t, T);  
        }else if(ans != b){ 
            T -= t;
            printf("Lose %d.  Total = %d.\n", t, T); 
        }
    }  
    return 0;
} 
