/*
编写一个程序，给定三条线段的长度 a,b,c，判断这三条线段是否能够构成三角形。如果能够构成，则计算其面积。如果不能构成，输出 No solution.
*/

#include<stdio.h>
#include<math.h>

int Judge_Triangle(double a,double b,double c){
   if(a + b > c && a + c > b && b + c > a){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);

    if(!Judge_Triangle(a,b,c)){
        printf("No solution.");
    }else{
        double s = (a + b + c) / 2;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("%.2f", area);
    }


    return 0;
}