# include <cstdio>
struct Student{
    char name[11];
    char id [11];
    int score;
}temp, max, min;
int main(){
    int n;
    scanf("%d", &n);
    max.score = 0;
    min.score = 101;
    for(int i = 0; i < n; i++){
        scanf("%s%s%d", temp.name, temp.id, &temp.score);
        if(temp.score > max.score)
        max = temp;
        if(temp.score < min.score)
        min = temp;
    }
    printf("%s %s\n",max.name, max.id );
    printf("%s %s\n",min.name, min.id );

    return 0;
}