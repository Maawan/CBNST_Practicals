#include<stdio.h>
float get(float x , float y){
    return (x-y) / (x+y);
}
int main(){
    float x0 , y0 , h , slope;
    printf("\n Enter Initial Point of X0 and Y0");
    scanf("%f %f", &x0 , &y0);
    float x;
    printf("\n Enter Point for which you need value");
    scanf("%f" , &x);
    float n ;
    printf("\n Enter Number of terms ");
    scanf("%f" , &n);
    h = (x - x0) / n;
    float yn;
    float k1 , k2 , k3 , k4 , k;
    for(int i = 0 ; i < n ; i++){
        k1 = h * get(x0 , y0);
        k2 = h * get(x0 + h/2 , y0 + k1/2);
        k3 = h * get(x0 + h/2 , y0 + k2/2);
        k4 = h * get(x0+h , y0+k3);
        k = (k1 + (2 * k2) + (2 * k3) + k4)/6;
        x0 = x0 + h;
        y0 = y0 + k;
    }
    printf("\n Value for f(%f) = %f",x0 , y0);
    return 0;
}
