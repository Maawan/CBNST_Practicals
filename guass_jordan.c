#include<stdio.h>
#include<math.h>
int main(){
    int n;
    float arr[20][20];
    printf("\n Enter value of n");
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= n ; j++){
            printf("\n Enter Values ");
            scanf("%f" , &arr[i][j]);
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(j != i){
                float r = arr[j][i] / arr[i][i];
                for(int k = 0 ; k <= n ; k++){
                    arr[j][k] = arr[j][k] - (r * arr[i][k]);
                }
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= n ; j++){
            printf("%f " , arr[i][j]);
        }
        printf("\n");
    }
    float ans[n];
    for(int i = 0 ; i < n ; i++){
        ans[i] =  arr[i][n] / arr[i][i];
    }
    for(int i = 0 ; i < n ; i++){
        printf("%f " , ans[i]);
    }
    return 0;
}
