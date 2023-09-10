#include <stdio.h>

float Diameter (float radius);
float Area (float radius);
float Circumfarence (float radius);


void main(void){

float radius,result;
 printf("enter the radius of circle");
 scanf("%f",&radius);

 result=Diameter(radius);
 printf("the diameter of circle if radius equal %.1f is %.3f \n",radius,result);

 result=Area(radius);
 printf("the area of circle if radius equal %.1f is %.3f \n",radius,result);

 result=Circumfarence(radius);
 printf("the Circumference of circle if radius equal %.1f is %.3f \n",radius,result);


}

float Diameter (float radius){

return(radius*2);
}

float Area (float radius){

return(3.14*radius*radius);
}

float Circumfarence (float radius){

return(2*3.14*radius);
}
