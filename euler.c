// EULER
#include<stdio.h>
float get(float x , float y){
    return x + y;
}
int main(){
    float x0 , y0 , h , slope;
    printf("\n Enter Initial Point of
           X0 and Y0");
    scanf("%f %f", &x0 , &y0);
    float x;
    printf("\n Enter Point for which
           you need value");
    scanf("%f" , &x);
    float n ;
    printf("\n Enter Number of
           terms ");
    scanf("%f" , &n);
    h = (x - x0) / n;
    float yn;
    for(int i = 0 ; i < n ; i++){
        slope = get(x0 , y0);
        yn = y0 + h * slope;
        y0 = yn;
        x0 = x0 + h;
    }
    printf("\n Value for f(%f) = %f",x0 , y0);
    return 0;
}
