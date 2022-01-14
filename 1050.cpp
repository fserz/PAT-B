# include <iostream>
# include <vector>
using namespace std;
int main(){
    int N, M, temp;
    scanf("%d%d", &N, &M);
    vector<int> score(M), ans(M);//score每题存放分数， ans每题存放答案
    for (int i = 0; i < M; i++)
    {
        cin >> score[i];    
    }
     for (int i = 0; i < M; i++)
    {
        cin >> ans[i];    
    }
    for (int i = 0; i < N; i++)
    {
        int sum = 0;//总得分
        for (int j = 0; j < M; j++)
        {
           cin >> temp;
            if (temp == ans[j])
            {
                sum += score[j];
            }
        }
        cout << sum << endl;
    }
    return 0;
}