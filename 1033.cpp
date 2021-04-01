# include <cstdio>
# include <cstring>
const int  max = 10010;
bool HashTable[256];
char str[max];

int main(){
    memset(HashTable, true, sizeof(HashTable));
    gets(str);
    int len = strlen(str);
    for(int j = 0; j < len; j++){
        if (str[j] >= 'A' && str[j] <= 'Z'){
            str[j] += 32; 
        }
        HashTable[str[j]] = false;

    }
    gets(str);
    int len2 = strlen(str);
    for(int i = 0; i < len2; i++){
        if(str[i] >= 'A' && str[i] <= 'Z' ){
            int low = str[i] + 32;
            if(HashTable[low] == true && HashTable['+'] == true){
                printf("%c", str[i]);
            }
        }
        else if(HashTable[str[i]] == true)
        {
             printf("%c", str[i]);
        }
        
    } 



    return 0;
}