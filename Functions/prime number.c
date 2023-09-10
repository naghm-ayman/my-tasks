#include<stdio.h>

int prime_num(int num);
void interval(int start, int end);


void main(void){

int start,end;

printf(" enter the start and the end of the interval");
scanf ("%d%d",&start, &end);

interval(start,end);
}

int prime_num(int num){

int loop;
for (loop=2;loop<=num/2;loop++){
    if (num%loop==0)
    return 0;
}
    return 1;
}

void interval(int start, int end){

 int num;
 while (start<=end){
    if ( prime_num(start)==1)
        printf(" %d is prime \n",start);

    start++;



}}




