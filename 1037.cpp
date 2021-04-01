# include<cstdio>
# include<cmath>
const int gallon = 17 * 29;
const int sickle = 29; 
int main(){
    int a1, a2, a3, b1, b2, b3;
    scanf("%d.%d.%d", &a1, &a2, &a3);
    scanf("%d.%d.%d", &b1, &b2, &b3);
    int P = a1 * gallon + a2 * sickle + a3;
    int A = b1 * gallon + b2 * sickle + b3;
    int change = A - P;
    if(change < 0)
    {
        change = (int)(fabs(change)); //change = -change 即可
        printf("-");
    }
    printf("%d.%d.%d\n", change / gallon, change % gallon / sickle, change % sickle);
    return 0;

} 