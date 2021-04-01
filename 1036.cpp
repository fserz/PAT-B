# include <cstdio>
int row, col;
char c;
int main(){
    scanf("%d %c", &col, &c);
    if(col % 2 == 0)
        row = col / 2;
    else
        row = (1 + col) / 2;
    for(int i = 0; i < col; i++)   //第一行
    printf("%c", c);
    printf("\n");
    
    
    
    for(int i = 2;i < row; i++){
        printf("%c", c);
        for(int j = 2; j < col; j++){
            printf(" ");
        }
            printf("%c\n", c);
    }
    
    
    
    for(int i = 0; i < col; i++)   //最后一行
        printf("%c", c);
    return 0;
}