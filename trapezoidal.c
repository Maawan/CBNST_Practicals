#include<stdio.h>
float getValue(float x){
    return x * x * x;
}
int main(){
    float a , b;
    printf("\n Enter Lower limit");
    scanf("%f",&a);
    printf("\n Enter Higher Limit");
    scanf("%f" , &b);
    float n;
    printf("\n Enter Number of Interval");
    scanf("%f",&n);
    float ans = getValue(a) + getValue(b);
    float h = (b - a) / n;
    for(float i = a + h ; i < b ; i = i+h){
        ans = ans + (2 * getValue(i));
    }
    ans = (ans * h) / 2;
    printf("\n Ans is %f",ans);
    return 0;

}
