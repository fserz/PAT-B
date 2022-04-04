# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;
struct player{
    int id;
    int score;
};
bool cmp(player a, player b){
    return a.score > b.score;
}
int main(){
    int n, id, x, y, s;
    cin >> n;
    vector<player> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].id;
        cin >> x >> y;
        v[i].score = x * x + y * y;
    }
    sort(v.begin(), v.end(), cmp);
    printf("%04d", v[n - 1].id);
    printf(" %04d", v[0].id);
    return 0;
}