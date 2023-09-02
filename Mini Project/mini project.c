#include<stdio.h>

void main (void){

    int cart=0,count=0,shipping;
    float total;

    float Milk = 4.99;
    float Butter = 6.00;
    float Flour = 3.49;
    float Sugar = 2.99;
    float Tea = 1.75;
    float Oil = 5.50;
    float Rice = 7.99;
    float Cheese = 3.00;
    float Salt = 0.50;
    float Egg = 2.49;


    int quantity_Milk = 0;
    int quantity_Butter = 0;
    int quantity_Flour = 0;
    int quantity_Sugar = 0;
    int quantity_Tea = 0;
    int quantity_Oil = 0;
    int quantity_Rice = 0;
    int quantity_Cheese = 0;
    int quantity_Salt = 0;
    int quantity_Egg = 0;



 printf("Welcome to our online ordering system!\n");
    printf("=====================================\n");
      printf("\n\t\t Menu\n");
         printf("\-----------------------------------\n\n");

   // to present the menu in front of the user

        printf("1.   Milk - $%.2f\n", Milk);
        printf("2. Butter - $%.2f\n", Butter);
        printf("3.  Flour - $%.2f\n", Flour);
        printf("4.  Sugar - $%.2f\n", Sugar);
        printf("5.    Tea - $%.2f\n", Tea);
        printf("6.    Oil - $%.2f\n", Oil);
        printf("7.   Rice - $%.2f\n", Rice);
        printf("8. Cheese - $%.2f\n", Cheese);
        printf("9.   Salt - $%.2f\n", Salt);
        printf("10.   Egg - $%.2f\n", Egg);

   printf("\nSelect an item (1-10) to be added to the cart, or 0 to finish: ");



 //to count the number of items added to the cart and the specific quantity of each item added

     do{

        scanf("%d",&count);

    switch(count){
        case 0: cart--;
              break;
        case 1: quantity_Milk++;
              break;
        case 2: quantity_Butter++;
              break;
        case 3: quantity_Flour++;
              break;
        case 4: quantity_Sugar++;
              break;
        case 5: quantity_Tea++;
              break;
        case 6: quantity_Oil++;
              break;
        case 7: quantity_Rice++;
              break;
        case 8: quantity_Cheese++;
              break;
        case 9: quantity_Salt++;
              break;
        case 10: quantity_Egg++;
              break;
        default: printf(" this item is not valid");
        cart--;
              break;
        }
        cart++;

    } while(count!=0);

     printf("items in cart is %d\n\n",cart);


 total=Milk*quantity_Milk+Butter*quantity_Butter+Flour*quantity_Flour+Sugar*quantity_Sugar+
          Tea*quantity_Tea+Oil*quantity_Oil+Rice*quantity_Rice+Cheese*quantity_Cheese+
          Salt*quantity_Salt+Egg*quantity_Egg; //the calculation process of the total order fees

 //to avoid placing any order  with less than 2 items
     if (cart<2){

        printf("2 items are required as minimum for one order \n");
     }



     else if (cart>5){
        printf("you have more than 5 items in your cart \n so you will have a voutcher by 20 prec on the total fees\n");
        total*=0.8; //20% discount on more than 5 items
    }


  printf("                  Receipt\n");
       printf("---------------------------------------\n");

       //computing the receipt with the number of specific items selected from user

           if (quantity_Milk>0)
            printf("%d of Milk = %.2f $\n",quantity_Milk,Milk*quantity_Milk);
           if (quantity_Butter>0)
            printf("%d of Butter = %.2f $\n",quantity_Butter,Butter*quantity_Butter);
           if (quantity_Flour>0)
            printf("%d of Flour = %.2f $\n",quantity_Flour,Flour*quantity_Flour);
           if (quantity_Sugar>0)
            printf("%d of Sugar = %.2f $\n",quantity_Sugar,Sugar*quantity_Sugar);
           if (quantity_Tea>0)
            printf("%d of Tea = %.2f $\n",quantity_Tea,Tea*quantity_Tea);
           if (quantity_Oil>0)
            printf("%d of Oil = %.2f $\n",quantity_Oil,Oil*quantity_Oil);
           if (quantity_Rice>0)
            printf("%d of Rice = %.2f $\n",quantity_Rice,Rice*quantity_Rice);
           if (quantity_Cheese>0)
            printf("%d of Cheese = %.2f $\n",quantity_Cheese,Cheese*quantity_Cheese);
           if (quantity_Salt>0)
            printf("%d of Salt = %.2f $\n",quantity_Salt,Salt*quantity_Salt);
           if (quantity_Egg>0)
            printf("%d of Egg = %.2f $\n",quantity_Egg,Egg*quantity_Egg);



  // the shopping fees added to the order price
  shipping = (total>=10)?3:2;
  printf("shipping fees is %d \n",shipping);
  printf("the total fee after adding shipping = %.2f \n ",shipping+total);

}







