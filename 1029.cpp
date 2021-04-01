# include <stdio.h>
# include <string.h>
# include <stdbool.h>

int main (){
    char str1[100], str2[100];
    bool HashTable[128] = {false};
    gets (str1);
    gets (str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char c1, c2;

    for(int i = 0; i < len1; i++){
        for(int j = 0; j < len2; j++){
            c1 = str1[i];
            c2 = str2[j];
            if(c1 >= 'a' && c1 <= 'z') c1 -= 32;
            if(c2 >= 'a' && c2 <= 'z') c2 -= 32;
            if(c1 == c2) break;
        }
        int j;
        if(HashTable[c1] == false && j == len2){
            printf("%c", c1);
            HashTable[c1] = true;
        }
    }


    return 0;
}