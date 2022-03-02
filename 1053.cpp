# include <iostream>
using namespace std;
int main(){
    int n, d, k, maybe = 0, must = 0;
    double e, temp;
    cin >> n >> e >> d;
    for (int i = 0; i < n; i++)
    {
        int day = 0;//day必须定义为局部变量，因为每次循环前要把它赋值为0
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> temp;
            if (temp < e)
                day++;  
        }
        if (day > (k / 2)){
            k > d ? must++ : maybe++;//must和maybe不会重叠，属于msybe则不属于must
            }
    }
    double mayberate = (double) maybe / n *100;
    double mustrate = (double) must / n *100;
    printf("%.1f%% %.1f%%", mayberate, mustrate);//输出%要使用（两个）%%
    return 0;
} 