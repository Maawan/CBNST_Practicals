// Iteration
#include<stdio.h>
#include<math.h>
float f(float x){
    return (3 * x * x) + (2 * x) + 5;
}
float g(float x){
    return (5 - (3 * x * x)) / 2;
}
float diff(float x){
    return -1 * 3 * x * x;
}
int main(){
    float x;
    do{
        printf("\n Enter initial Value ");
        scanf("%f" , &x);
        if(fabs(diff(x)) >= 1){
            printf("\n Oops ! Wrong Interval");
        }
    }while(fabs(diff(x)) >= 1);
    float temp;
    float err = 0.0001;
    int count = 0;
    do{
        printf("\n%d Current Root %f " , count ,g(x));
        temp = g(x);
        x = temp;
        count++;
        if(fabs(temp - g(temp)) < 0.00001) break;
    }while(fabs(g(x)) > err);
    printf("Root of the equation is %f and value at g(%f) = %f", x , x , g(x));
    return 0;
}
