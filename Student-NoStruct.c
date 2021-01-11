#include <stdio.h> //Access to library
#include <string.h> //Access to library


int main(void) {

  //Intialize variables 
  char student_names;
  int age;
  float gpa;
  char grade_level;

  int user_input;
  int a = 0;

//Ask User to insert student data or exit program
printf("Enter an action(1= insert  2 = exit):" );
scanf("%d",&user_input);

//Insert
if(user_input == 1){

  printf("Enter student name: ");

  //SCAN & PRINT STUDENT NAME
  scanf("%s", &student_names);
  printf("%s", &student_names);

  printf("\nEnter student age: ");

  //SCAN & PRINT STUDENT AGE
  scanf("%d", &age);
  printf("%d", age);

//Loop name
LOOP: do{

//SCAN AND PRINT STUDENT GPA
printf("\nEnter student gpa: ");  
scanf("%f", &gpa);

//Exception case: GPA must between 1.0 - 4.0 to be valid
if(gpa <= 4.0 && gpa >= 1.0){
    printf("%f", gpa);
    a++;

  goto out; //Exit the do while loop
}
else {
    printf("Error, Try Again. GPA should be between 1.0-4.0");

  goto LOOP; //Repeat the start of the loop
}
}while(a == 1);

//Loop name
out:
  printf("\nEnter student grade level: ");

  //SCAN & PRINT GRADE LEVEL
  scanf("%s", &grade_level);
  printf("%s", &grade_level);

}

//USER INPUT TO EXIT
else if (user_input == 2){
    printf("Exit");
      return 0;
}
//Exception when it's not 1 or 2
else{
      printf("Error");
    }

}
