#include <stdio.h> //Access to library
#include <string.h> //Access to library

/* Used as Reference https://beginnersbook.com/2014/01/c-structures-examples/
https://www.javatpoint.com/array-of-structures-in-c
https://www.tutorialspoint.com/cprogramming/c_input_output.htm
https://fresh2refresh.com/c-programming/c-array-of-structures/
https://overiq.com/c-programming-101/array-of-structures-in-c/
https://stackoverflow.com/questions/29568297/c-how-to-store-multiple-strings-in-an-array
https://beginnersbook.com/2014/01/c-arrays-example/
*/

//Created a stucture to initialize Student Data information, such as Age, GPA and name
struct  Student_data
{ 
  char student_name[100]; 
  int student_age; 
  float student_gpa; 
  char grade_level[100]; 
};


int main(void){

  //initizale variables
  int user_input;
  int a = 0; 

  struct Student_data student; //call strutcure in main; student is address

//Ask user to input or exit of the program
printf("Enter an action(1= insert  2 = exit):" ); 
scanf("%d",&user_input);

//FOR INSERT
if(user_input == 1){

  //SCAN & PRINT STUDENT NAME
  printf("\nEnter a Student Name: ");
  scanf("%s",&student.student_name);
  printf ("Student Name is %s ", student.student_name);

  //SCAN & PRINT STUDENT AGE
  printf("\nEnter a Student Age: ");
  scanf("%d",&student.student_age);
  printf("Student age is %d", student.student_age);

//SCAN & PRINT GPA
LOOP: do{

  printf("\nEnter a student GPA: ");
  scanf("%f",&student.student_gpa);

//Condition: See if GPA is validated, must be between 1.0 - 4.0
if(student.student_gpa <= 4.0 && student.student_gpa >= 1.0){
  printf("Student GPA is %f", student.student_gpa);
  a++;

  goto out; //exit the do while loop
}

else {
  printf("Error, Try Again. GPA should be between 1.0-4.0");

  goto LOOP; //Repeats the condition to see if the user's input is valid
}

}while(a == 1);

out:
//SCAN & PRINT GRADE LEVEL
  printf("\nEnter a student Grade Level: ");
  scanf("%s", &student.grade_level);
  printf("Student grade level is %s: ", student.grade_level);
}

//For exit 
else if (user_input == 2){
    printf("Exit");
      return 0;
}

//If user typed anything else but 1 or 2
else{
      printf("Error");
    }
}
