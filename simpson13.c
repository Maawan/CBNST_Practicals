#include<stdio.h>
float getValue(float x){
    return 1 / (1 + (x * x));
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
    if((int)n % 2 != 0){
        printf("\n Number of Interval should be Even only ");
        return 0;
    }
    int count = 1;
    float ans = getValue(a) + getValue(b);
    float h = (b - a) / n;
    for(float i = a + h ; i < b ; i = i+h){
        if(count % 2 == 0){
            ans = ans + (2 * getValue(i));
        }else{
            ans = ans + (4 * getValue(i));
        }
        count++;
    }
    ans = (ans * h) / 3;
    printf("\n Ans is %f",ans);
    return 0;

}
