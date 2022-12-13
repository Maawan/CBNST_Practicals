#include<stdio.h>
#include<math.h>
float f(float x){
    return 3 * sin(x) - sin(x);
}
float diff(float x){
    return x - cos(x);
}
float getValue(float x){
    return x - (f(x) / diff(x));
}
int main(){
    float x0 , x1;
    do{
        printf("\n Enter x0 and x1");
        scanf("%f %f" , &x0 , &x1);
        if(f(x0)*f(x1) >= 0){
            printf("\n Wrong Interval ");
        }
    }while(f(x0)*f(x1) >= 0);
    x0 = (x1 + x0) / 2;
    if(diff(x0) == 0){
        printf("\n Wrong Interval ");
        return 0;
    }
    float err = 0.0001;
    int count = 0;
    float temp;
    do{
        printf("\n Iteration Number %d  x0 = %f  f(%f) = %f" , ++count , x0 , x0 , getValue(x0));
        temp = getValue(x0);
        if(fabs(x0 - temp) < err) break;
        x0 = temp;
        if(count > 100) break;
    }while(fabs(getValue(x0)));
    printf("\n Root of the Equation is %f and at it is %f   and actual value %f" , x0 , getValue(x0) , f(x0));
    return 0;
    
}
