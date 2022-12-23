#include<stdio.h>
int main(){
    int n;
    printf("\n Enter N");
    scanf("%d",&n);
    int arr[n][2];
    for(int i = 0 ; i < n ; i++){
        printf("\n Enter value of X");
        float temp ;
        scanf("%f",&temp);
        arr[i][0] = temp;
        float temp2;
        printf("\n Enter value of F(x)");
        scanf("%f",&temp2);
        arr[i][1] = temp2;
    }
    printf("\n Enter value you need to find");
    float x;
    scanf("%f" , &x);
    float ans = 0;
    for(int i = 0 ; i < n ; i++){
        float term = 1;
        float down = 1;
        for(int j = 0 ; j < n ; j++){
            if(i != j){
                term = term * ((x - arr[j][0])/(arr[i][0]-arr[j][0]));
            }
            
        }
        ans = ans + (term * arr[i][1]);
    }
    printf("\n Value for F(%f) is %f" , x , ans);
    return 0;
}
