# include <cstdio>
# include <cstring>
const int max = 100010;
const int mod = 1000000007;
char str[max];
int leftnum[max] = {0};


int main(){
    gets(str);
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        if(i > 0) leftnum[i] = leftnum[i - 1];
        if(str[i] == 'P')
            leftnum[i]++;
    }

    int ans = 0, rightnum = 0;
    for(int i = len - 1; i >= 0; i--){
        if(str[i] == 'T') rightnum++;
        else if(str[i] == 'A')  ans = (ans +rightnum * leftnum[i])% mod;
    }
    printf("%d\n", ans);




    return 0;
}