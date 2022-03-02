# include <iostream>
# include <vector>
# include <set>
using namespace std;
int main(){
    int n, a, b, m;
    scanf("%d", &n);
    vector<int> couple(100000, -1);//设置一个容量为10000，初始值均为1的vector
    for (int  i = 0; i < n; i++)
    {
        scanf("%d%d", &a, &b);
        couple[a] = b;
        couple[b] = a;   
    }
    scanf("%d", &m);
    vector<int> guest(m), isExit(100000);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &guest[i]);
        if (couple[guest[i]] != -1)//是否有对象
        {
            isExit[couple[guest[i]]] = 1;//将其对象exit设为1，表示一个人对象的对象即他自己来到了排队
        }
    }
    set<int> s;
    for (int i = 0; i < m; i++) 
    {
        if(!isExit[guest[i]])//所有exist不为1的人，对象是没有来到派对的
        s.insert(guest[i]);
    }
    printf("%d\n", s.size());
    for (auto it = s.begin(); it != s.end(); it++)
    {
        if (it != s.begin()) printf(" ");
        printf("%05d", *it);
    }
    return 0;
}