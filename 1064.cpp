# include <iostream>
# include <set>//set内部自动有序，不含重复元素
using namespace std;
int friendnum(int num){
    int sum = 0;
    while (num != 0)//计算各位之和
    {
        sum += num % 10;
        num /= 10;
    }
return sum;
}
int main(){
    int n, temp;
    set<int> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        s.insert(friendnum(temp));
    }
    cout << s.size() <<endl;
    for (auto it = s.begin(); it != s.end(); it++)//使用迭代器时直接使用自动类型声明
    {
        if (it  != s.begin())//注意控制输入空格的条件
        {
            cout << " ";
        }
        cout << *it;
    }
    return 0;
}