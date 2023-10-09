#include<stdio.h>
#include<string.h>
#define MAX_SIZE 20 //the maximum size of array is 20

void InputSTd (char STd_names[MAX_SIZE][30], int STd_grade[MAX_SIZE], int STd_Length ); //function declaration
void sort_STd (char STd_names[MAX_SIZE][30], int STd_grade[MAX_SIZE], int STd_Length ); //function declaration
void PrintSTd (char STd_names[MAX_SIZE][30], int STd_grade[MAX_SIZE], int STd_Length ); //function declaration
void Avr_STd (char STd_names[MAX_SIZE][30], int STd_grade[MAX_SIZE], int STd_Length );  //function declaration
static int sum=0,average;

void main(void){

char STd_names[MAX_SIZE][30];
int STd_grade[MAX_SIZE];
int STd_Length;

again:
  printf(" enter the number of students up to %d\n",MAX_SIZE);
    scanf("%d",&STd_Length);

if (STd_Length>MAX_SIZE){
    printf("YOU EXCEEDS THE LIMITES NUMBER \n"); // max number can be listed is 20 so user must enter less than 20
    printf("....................\n");
   goto again;
}



//calling the functions
  InputSTd (STd_names,STd_grade,STd_Length );
  sort_STd( STd_names,STd_grade,STd_Length );
  PrintSTd(STd_names,STd_grade,STd_Length );
  Avr_STd(STd_names,STd_grade,STd_Length );
}

//function definition

void InputSTd (char STd_names[MAX_SIZE][30], int STd_grade[MAX_SIZE], int STd_Length ){ //this function is to take the names and scores of the students

  for(int i=0; i<STd_Length; i++){
    printf("enter name of student %d : ",i+1);
     scanf("%s", STd_names[i]);
    printf("enter grade of student %d : ",i+1);
     scanf("%d",&STd_grade[i]);
     sum+=STd_grade[i];
    }
}

//function definition

void sort_STd ( char STd_names[MAX_SIZE][30],int STd_grade[MAX_SIZE], int STd_Length ){
    // Sort the names alphabitcly
    for (int i = 0; i < STd_Length - 1; i++) {
        for (int j = 0; j < STd_Length - i - 1; j++) {
            if (strcmp(STd_names[j], STd_names[j + 1]) > 0) {
                char temp[STd_Length];
                strcpy(temp, STd_names[j]);
                strcpy(STd_names[j], STd_names[j + 1]);
                strcpy(STd_names[j + 1], temp);
    // sort the scores
                int tempScore = STd_grade[j];
                STd_grade[j] = STd_grade[j + 1];
                STd_grade[j + 1] = tempScore;
            }
        }
    }
    }


//function definition

void PrintSTd (char STd_names[MAX_SIZE][30], int STd_grade[MAX_SIZE], int STd_Length ){ //this function is to display the students informations
 printf ("\n\n---- Students Information -----\n\n");
  for(int i=0; i<STd_Length; i++){
    printf("\n Student %d: Name: %s, Test Score: %d\n", i + 1, STd_names[i],STd_grade[i]);
    }
    average=sum/STd_Length; // to get the average of scores

    printf("\n\n Scores Average : %d\n",average);
    printf(".............................\n");
}

//function definition

void Avr_STd (char STd_names[MAX_SIZE][30], int STd_grade[MAX_SIZE], int STd_Length ){
    int max= STd_grade[0];
     for(int i=1; i<STd_Length; i++){
      if (max<STd_grade[i]){
            max=STd_grade[i];
        printf("THE HIGHEST SCORE IS %d \n",max);
        printf("\n Congratulations to (%s) you got the highest score in finals \n<<<<< WISH YOU ALL THE SUCSSES >>>>>\n  ", STd_names[i]);
      } // to get the highest student score with his name
  }

  for(int i=0; i<STd_Length; i++){
      if (STd_grade[i]<average){
        printf("\n(%s) WARNING: your grades are below average improve or you will fail the semester", STd_names[i]);
       } // to get the students below the average
  }

}

