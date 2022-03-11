# include <iostream>
# include <string>
# include <vector>
# include <cctype>
# include <algorithm>
# include <map>
using namespace std;
struct node
{
    string school;
    int tws, ns;
};
bool cmp(node a, node b){
    if (a.tws != b.tws)
        return a.tws > b.tws;
    else if(a.ns != b.ns)
    return a.ns < b.ns;
    else  return a.school < b.school;
}
int main(){
    int n;
    cin >> n;
    map<string, int> cnt;//cnt用来存储某学校名称对应的参赛人数。
    map<string, double> sum;//sum计算某学校名称对应的总加权成绩
    string s;
    for (int i = 0; i < n; i++)
    {
        string id, school;
        cin >> id;
        double score;
        cin >> score;
        cin >> school;
        for (int j = 0; j < school.length(); j++)
        school[j] = tolower(school[j]);//换成小写
        if (id[0] == 'B')
            score /= 1.5;
          else if(id[0] == 'T')
            score *= 1.5;
        sum[school] += score;
        cnt[school]++;
    }
    vector<node> ans;
    for (auto it = cnt.begin(); it != cnt.end(); it++)
    ans.push_back(node{it->first, (int)sum[it->first], cnt[it->first]});
    sort(ans.begin(), ans.end());
    int rank = 0, pres = -1;
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        if (pres != ans[i].tws) rank = i + 1;
        pres = ans[i].tws;
        cout << rank;
        cout << ans[i].school;
        cout << ans[i].tws << " " << ans[i].ns << endl;
    }
    return 0;
}


