#include <stdio.h>

int Armstrong(int num);
void get_Armstrong(int start,int end);

void main(void){
  int start,end;

printf(" enter the start and end of interval");
scanf("%d %d",&start, &end);

get_Armstrong(start,end);

}

int Armstrong(int num){

int sum=0,temp,LD;

temp=num;

while(temp!=0){

    LD=temp%10;
    sum+=(LD*LD*LD);
    temp/=10;

}
 if (num==sum){
  return 1;
 }
 else
  return 0;
}

void get_Armstrong(int start,int end){
printf("armstrong numbers between %d and %d is\n",start,end);

while (start<=end){

    if (Armstrong(start)==1){

        printf(" %d,",start);
    }
        start++;

}
}
