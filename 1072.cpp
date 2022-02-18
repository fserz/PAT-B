# include <iostream>
using namespace std;
bool forbid[10000] = {false};
int main(){
    int n, m, temp, k, snum = 0, fnum = 0;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &temp);
        forbid[temp] = true;
    }
    for (int i = 0; i < n; i++)
    {
        char name[10];
        bool flag = true;
        scanf("%s %d", name, &k);
        for (int j = 0; j < k; j++)
        {
            scanf("%d", &temp);
            if (forbid[temp])
            {
                if (flag)
                {
                    printf("%s:", name);
                    flag =false;
                }
                printf(" %04d", temp);//输出要用%04d不足四位补零
                fnum++;
            }
            
        }
        if (!flag) {
            printf("\n");
            snum++;
            }
    }
    printf("%d %d", snum, fnum);
    return 0;
}