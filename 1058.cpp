# include <iostream>
# include <vector>
# include <set>
using namespace std;
int main(){
    int n, m, temp, k;
    scanf("%d%d", &n, &m);//学生人数，多选题个数
    vector<set<char>> right(m);
    vector<int> total(m), wrongCnt(m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d%d%d", &total[i], &temp, &k);
        for (int j = 0; j < k; j++)
        {
            char c;
            scanf(" %c", &c);
            right[i].insert(c);
        }
    }
    for (int i = 0; i < n; i++)
    {
        int score = 0;
        scanf("\n");
        for (int j = 0; j < m; j++)
        {
            if (j != 0) scanf(" ");
            scanf("(%d", &k);
            set<char> st;
            char c;
            for (int l = 0; l < k; l++)
            {
                scanf(" %c", &c);
                st.insert(c);
            }
            scanf(")");
            if (st == right[j])
            {
                score += total[j];
            }else{
                wrongCnt[j]++;
            }
        }
        printf("%d\n", score);
    }
    int maxWrongCnt = 0;
    for(int i = 0; i < m; i++){
        if (wrongCnt[i] > maxWrongCnt)
        {
            maxWrongCnt = wrongCnt[i];
        }
    }
    if(maxWrongCnt == 0)
    printf("Too simple");
    else{
        printf("%d", maxWrongCnt);
        for (int i = 0; i < m; i++)
        {
            if (wrongCnt[i] == maxWrongCnt)
            {
                printf(" %d, i + 1");
            }
        }
    }
    return 0;
}
//满分值，选项个数，正确选项个数，所有正确选项
// scanf中的%d和%c之间一定要有分隔符的主动scanf输入，否则可能接收成空格或者空值