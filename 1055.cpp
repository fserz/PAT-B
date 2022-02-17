# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;
struct node{
    string name;
    int height;
};
int cmp(struct node a, struct node b){
    return a.height != b.height ? a.height > b.height : a.name < b.name;
};//此处用if会超时，三目运算符相比if效率更高并且代码更简洁
int main(){
    int n, k, m;
    cin >> n >> k;
    vector<node> stu(n);
    for (int i = 0; i < n; i++)
        cin >> stu[i].name >> stu[i].height;
    sort(stu.begin(), stu.end(), cmp);
    int t = 0, row = k;
    while (row)
    {
        if(row == k)
            m = n - n / k * (k - 1);
        else
            m = n / k;
        vector<string> ans(m);
        ans[m / 2] = stu[t].name;
        int j = m / 2 - 1;//左边
        for (int i = t + 1; i < t + m; i = i + 2)//i + 2因为左右间隔输出
            ans[j--] = stu[i].name;
        j = m / 2 + 1;//右边
        for (int i = t + 2; i < t + m; i = i + 2)//i + 2因为左右间隔输出
            ans[j++] = stu[i].name;
        cout << ans[0];
        for (int i = 1; i < m; i++)
            cout << " " << ans[i] ;
        cout << endl;
        t = t + m;
        row--;
    }
    return 0;
}