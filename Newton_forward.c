#include<stdio.h>
int main(){
    int n;
    float temp = 929292929;
    printf("\n Enter Number of Terms ");
    scanf("%d",&n);
    float arr[n][n+1];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= n ; j++){
            arr[i][j] = 929292929;
        }
    }
    for(int i = 0 ; i < n ; i++){
        printf("\n Enter Value of X");
        float temp;
        scanf("%f",&temp);
        arr[i][0] = temp;
    }
    for(int i = 0 ; i < n ; i++){
        printf("\n Enter Value of Y");
        float temp;
        scanf("%f",&temp);
        arr[i][1] = temp;
    }
    for(int j = 1 ; j < n ; j++){
        for(int i = 1 ; i < n ; i++){
            if(arr[i][j] == temp) break;
            float t = arr[i][j] - arr[i-1][j];
            arr[i-1][j+1] = t;
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= n ; j++){
            if(arr[i][j] != temp){
                printf("%f " , arr[i][j]);
            }
            
        }
        printf("\n");
    }
    float ans = 0;
    float a = arr[0][0];
    float h = arr[1][0] - arr[0][0];
    float x;
    printf("\n Enter Value of X which user want to know");
    scanf("%f",&x);
    float fact = 1;
    float u = (x - a) / h;
    ans = arr[0][1];
    for(int i = 2 ; i <= n ; i++){
            ans = ans + (u * arr[0][i])/fact;
            fact = fact*i;
            u = u * (u - (i-1));
    }
    printf("\n f(%f) = %f " , x , ans);
    return 0;
}
