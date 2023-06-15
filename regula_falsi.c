// Regula Falsi
#include<stdio.h>
#include<math.h>
float f(float x){
    return ((x * x * x) - (5 * x) + 1);
}
int main(){
    float x0 , x1 , err;
    do{
        printf("Enter the value of x0 and x1");
        scanf("%f %f" , &x0 , &x1);
        if(f(x1)*f(x0) > 0){
            printf("\n Oops ! Wrong Interval Chosen ");
        }
    } while(f(x1)*f(x0) >= 0);
    printf("Enter allowed error");
    scanf("%f" , &err);
    float x = ((x0 * f(x1)) - (x1 * f(x0))) / (f(x1) - f(x0));
    int count = 0;
    while(fabs(f(x)) > err){
        printf("\n%d Interval Value, value of x = %f ,
               value of f(%f) = %f " , count++ , x , x , f(x));
        if(f(x0) * f(x) < 0){
            x1 = x;
        }else{
            x0 = x;
        }
        x = ((x0 * f(x1)) - (x1 * f(x0))) / (f(x1) - f(x0));
        printf("%f" , f(x));
    }
    printf("%f %f" , err, fabs(f(x)));
    printf("\n Root of the Equation is -> %f 
           and value of f(x) at x is %f" , x , f(x));
    return 0;
}
