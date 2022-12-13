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
        for(int j = i+1 ; j < n ; j++){
            float c = arr[j][i] / arr[i][i];
            for(int k = 0 ; k <= n ; k++){
                arr[j][k] = arr[j][k] - (c * arr[i][k]);
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
    ans[n-1] = arr[n-1][n] / arr[n-1][n-1];
    for(int i = n - 2 ; i >= 0 ; i--){
        float tempValue = arr[i][n];
        int j , k;
        float total = 0;
        for(j = n - 1 , k = n - 1 ; j > i ; j-- , k--){
            total += arr[i][j] * ans[k];
        }
        //printf("\n %f  %f " , tempValue , total , an)
        ans[i] = tempValue - total;
        ans[i] = ans[i] / arr[i][i];
    }
    for(int i = 0 ; i < n ; i++){
        printf("%f " , ans[i]);
    }
    return 0;
}
