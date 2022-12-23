#include<stdio.h>
float getX(float x , float y , float z){
    return (17 - y + (2 * z)) / 20;
}
float getY(float x , float y , float z){
    return (-18 + z -(3*x)) / 20;
}
float getZ(float x , float y , float z){
    return (25 + (3*y) - (2*x)) / 20;
}
float fabs(float x){
    if(x < 0) return x * -1;
    return x;
}
int main(){
    int arr[3][4];
    float x0 = 0, x1 = 0 ,y1 = 0 , y0 = 0 , z1 = 0 , z0 = 0;
    for(int i = 0 ; i < 3; i++){
        for(int j = 0 ; j < 4; j++){
            printf("\n Enter Data");
            float temp;
            scanf("%f",&temp);
            arr[i][j] = temp;
        }
    }   
    int n = 3;
    int m = 4;
    for(int i = 0 ; i < n ; i++){
        float sum = 0;
        for(int j = 0 ; j < m - 1; j++){
            if(i != j) sum += fabs(arr[i][j]);
        }
        if(fabs(arr[i][i]) <= sum){
            printf("\n Matrix is not diogonal dominant");
        } 
    }
    float err;
    printf("\n Enter Allowed Error");
    scanf("%f" , &err);
    int count = 1;
    float prevX =0, prevY = 0, prevZ=0;
    do{
        x1 = getX(x0 , y0 , z0);
        y1 = getY(x1 , y0 , z0);
        z1 = getZ(x1 , y1 , z0);
        printf("\n Iteration Number %d x = %0.3f y = %0.3f z = %0.3f" , count++ , x1 , y1 , z1);

        prevX = x0;
        prevY = y0;
        prevZ = z0;
        x0 = x1;
        y0 = y1;
        z0 = z1;
    }while(fabs(x0 - prevX) > err || fabs(y0 - prevY) > err || fabs(z0 - prevZ) > err);
    printf("%0.3f   %0.3f   %0.3f  " , x0 , y0 , z0);
    return 0;
}
