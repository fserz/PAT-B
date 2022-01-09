# include <iostream>
# include <string>
using namespace std;

int main(){
    int n, m , t;
    cin >> n;
    string stu[1010][2], s1, s2;
    for (int i = 0; i < n; i++)
    {
        cin >> s1 >> t >> s2;
        stu[t][0] = s1;//考号
        stu[t][1] = s2;//座位号
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >>t;
        cout << stu[t][0] << " " << stu[t][1] <<endl;
    } 
    return 0;
}