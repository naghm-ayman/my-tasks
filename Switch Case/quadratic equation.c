#include<stdio.h>
#include<math.h>

void main (main){

    float a,b,c;
    float Root1 , Root2 , imaginary;
    float delta;

    printf("enter the variables of the quadratic equation (aX^2 + bX + c)\t");
      scanf("%f%f%f",&a,&b,&c);

    delta = (b*b)-(4*a*c);

    switch (delta>0){

      case 1:
          Root1= (-b + sqrt(delta))/ (2.0*a);
          Root2= (-b - sqrt(delta))/ (2.0*a);

      printf("the two real roots of the equation is %.3f and %.3f",Root1,Root2);

       break;

      case 0:

          switch (delta<0){

            case 1:
                Root1=Root2= -b / (2 * a);
                    imaginary = sqrt(-delta) / (2 * a);

            printf("the two imaginary roots of the equation is %.3f + i%.3f and %.3f - i%.3f",Root1,imaginary,Root2,imaginary);

             break;


            case 0:
                Root1=Root2 = -b / (2 * a);

                    printf("Two equal and real roots is %.3f and %.3f", Root1, Root2);

                    break;




          }






    }




}
