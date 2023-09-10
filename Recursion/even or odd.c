# include <stdio.h>

void even_OR_odd(int num,int end);


void main (void){

int start,end;

//if u want to print even numbers start the interval with even one and vise versa

printf(" enter the start and the end of the interval");
scanf ("%d%d",&start, &end);

 even_OR_odd(start,end);

}

void even_OR_odd(int num,int end){

if (num>end)
    return;
else {
    printf("%d, ",num);
    return(even_OR_odd(num+2,end));
}


}
