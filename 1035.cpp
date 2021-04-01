# include <cstdio>
# include <algorithm>
using namespace std;
const n = 120;
int origin[n], changed[n], temo[n];
int n;

bool isSame(int A[], int B[]){
    for(int i =0; i < n; i++){
        if(A[i] != B[i]{
        return false
    }
         return ture;
}

bool showArray(int A[]){
    for(int i = 0; i < n; i++){
        printf("%d", &A[i]);
        if(i < n - 1)
        printf(" ");
    }
    printf("\n");
}

bool insetSort(){
    bool flag = false;
    for(int i = 1; i < n; i++){
        if(i != 1 && isSame(temo, changed)){
            flag = true;
        }  
        int temp = temo[i], j = 1;
        while(j > 0 && temo[j - 1] > temp){
            temo[j] = temo[j - 1];
            j--;
        }
        temo[j] = temp;
        if(flag == true){
            return true;
        }                        
    }
    return false;
}


int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
    temo[i] = origin[i];
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &changed[i]);        
    }
    if(){
        printf("Insertion Sort\n");
        showArray(temo);
    }else
    {
        printf("Merge Sort\n");

    }
    


    return 0；
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            

