# include <cstring>
# include <cstdio>
const int max = 1010;
int Hashtable[max] = {0};

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int team, member, score;
        scanf("%d-%d %d", &team, &member, &score);
        Hashtable[team] += score;
    }
    

    int k, maxscore = 0;
    for(int i = 0; i < max; i++){
        if(Hashtable[i] > maxscore){
        k = i;
        maxscore = Hashtable[i];
        }
    }
    printf("%d %d\n", k, maxscore);



    return 0;
}