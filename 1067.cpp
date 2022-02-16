# include <iostream>
using namespace std;
int main(){
    string str, temp;
    int n, count = 0;
    cin >>str;//不能直接getline否则会把n也读入
    cin  >> n;
    getchar();//读取换行符
    while (1)
    {
        getline(cin, temp);
        if (temp == "#")
        break;
        count++;
        if (temp == str && count <= n){
            cout << "Welcome in";
            break;
        }else{
            cout << "Wrong password: " << temp << endl;
            if (count == n)
            {
                cout << "Account locked" << endl;
                break;
            }
        }
    }
    return 0;
}


