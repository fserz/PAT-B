# include <cstdio>
int change(char c){
    if(c == 'B')
        return 0;
    if(c == 'C')
        return 1;
    if(c == 'J')
        return 2;
}
int main(){
    int n, k1, k2;
    char c1, c2;
    int handA[3] = {0},timeA[3] = {0};
    int handB[3] = {0},timeB[3] = {0};
    char result[3] = {'B', 'C', 'J'};
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        getchar();
        scanf("%c %c", &c1, &c2);
        k1 = change(c1);
        k2 = change(c2);
        if((k1 + 1)%3 == k2 ){
            timeA[0]++;//0win 1draw 2lose
            timeB[2]++;
            handA[k1]++;
        }
        else if((k1 == k2)){
            timeA[1]++;
            timeB[1]++;
        }
        else{
            timeA[2]++;
            timeB[0]++;
            handB[k2]++;
        }


    }
    int id1 = 0, id2 = 0;
    for(int i = 0; i < 3; i++){
        if(handA[id1] < handA[i])
        id1 = i;
    }
    for(int i = 0; i < 3; i++){
        if(handB[id2] < handB[i])
        id2 = i;
    }
    printf("%d %d %d\n", timeA[0], timeA[1], timeA[2]);
    printf("%d %d %d\n", timeB[0], timeB[1], timeB[2]);
    printf("%c %c\n", result[id1], result[id2]);
    return 0;
    }