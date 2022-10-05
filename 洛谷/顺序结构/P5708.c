#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,p;
    scanf("%lf %lf %lf",&a,&b,&c);
    p = (a+b+c)/2.0;
    printf("%.1f",sqrt(p*(p-a)*(p-b)*(p-c)));
}
//  %lf 输出double  L->long double   %.1f 小数后一位