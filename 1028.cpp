# include <cstdio>
struct person {
    char name[10];
    int yy, mm , dd;
}temp, youngest, oldest, left, right;
bool less(person a, person b){
    if(a.yy != b.yy)
    return a.yy <= b.yy;
    else if(a.mm != b.mm)
    return a.mm <= b.mm;
    else return a.dd <= b.dd;
}
bool more(person a, person b){
    if(a.yy != b.yy)
    return a.yy >= b.yy;
    else if(a.mm != b.mm)
    return a.mm >= b.mm;
    else return a.dd >= b.dd;
}
void init(){
youngest.yy = left.yy = 1814;
oldest.yy = right.yy = 2014;
youngest.mm = oldest.mm = right.mm = left.mm = 9;
youngest.dd = oldest.dd = right.dd = left.dd = 6;
}
int main(){
    init();
    int n, num = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s %d/%d/%d", temp.name, &temp.yy, &temp.mm, &temp.dd);
        if(less(left, temp) && more(temp, right)){
        num++;
        if (less(temp, youngest))
        youngest = temp;
        if (more(temp, oldest))
        oldest = temp;
        }
    }
    if(num == 0)
        printf("0\n"); 
        else
        printf("%d %s %s\n", num, oldest.name, youngest.name);
    return 0;
}