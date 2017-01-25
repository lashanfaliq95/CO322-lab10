#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct _ {
int batch;
int regNo;
char firstName[20];
char lastName[20];
float cGPA;
}student_t;///creating a new type to store student information

void addstudent(int n,int i);
void printstudent(int a,int b);
void printallstudents(int a,int b);
void deleterecord(int a,int b);

student_t sarray[1000];//defining a array to store all the student data
int main(){
	  int no_of_inputs=0,no_of_inputs_deleted=0;
	while(1){
	puts("--------------------------------------------");
	puts("A VOLATILE STUDENT RECORD MAINTENANCE SYSTEM");
	puts("--------------------------------------------");
	puts("0. Quit");
	puts("1. Insert a Student Record");
	puts("2. Print a Student Record");
	puts("3. Print all Student Records");
	puts("4. Delete a Student Record");

	int input,n;

	char a[20];//full registration number as a string
	scanf("%d",&input);
if(input==0){break;}//if input is 0 quit the programme
else if(input==1){

		addstudent(no_of_inputs,no_of_inputs_deleted);
        no_of_inputs++;
		}
else if(input==2){//insert student
		printf("Enter the Registration Number:");
		scanf("%s",&a);

	int n;
	char temp_arrray1[2],temp_arrray2[3];
  
  for(n=2;n<4;n++){
   temp_arrray1[n-2]=a[n];
  }

  temp_arrray1[2]='\0';  

int batch=atoi(temp_arrray1);//getting the value of ineteger value of batch from the string
   
   for(n=5;n<8;n++){
temp_arrray2[n-5]=a[n];
 }
temp_arrray2[3]='\0';
 
int regnum=atoi(temp_arrray2);//getting the value of ineteger value of regno from the string
	 printstudent(batch,regnum);}

else if(input==3){//print all students

             printallstudents(no_of_inputs,no_of_inputs_deleted);

		}
else if(input==4){//to delete a record
                no_of_inputs_deleted++;
            printf("Enter the Registration Number:");
		scanf("%s",&a);

	int n;
  char temp_arrray1[2],temp_arrray2[3];
  for(n=2;n<4;n++){
   temp_arrray1[n-2]=a[n];
  }
  temp_arrray1[2]='\0';

int batch=atoi(temp_arrray1);
   
   for(n=5;n<8;n++){
temp_arrray2[n-5]=a[n];
 }

temp_arrray2[3]='\0';
 
 int regnum=atoi(temp_arrray2);
           
            deleterecord(batch,regnum);
		}
	
}
	return 0;
	}

void addstudent(int n,int i){//function to insert student

	    printf("Enter the batch (11/12/13/14):");
		scanf("%d",&sarray[n-i].batch);
		printf("Enter the registration number:");
		scanf("%d",&sarray[n-i].regNo);
		printf("Enter the first name         :");
		scanf("%s",&sarray[n-i].firstName);
		printf("Enter the last name          :");
		scanf("%s",&sarray[n-i].lastName);
		printf("Enter the cumulative GPA     :");
		scanf("%f",&sarray[n-i].cGPA);

	}
void printstudent(int a,int b){//funtion to print the specified student
	int n;
	for(n=0;n<1000;n++){


	if(a==sarray[n].batch && b==sarray[n].regNo ){//checking to what index array of the array the required student is saved to

	printf("The student %s %s (E/%d/%d) has a cumulative GPA of %0.2f \n",sarray[n].firstName,sarray[n].lastName,sarray[n].batch,sarray[n].regNo,sarray[n].cGPA);
	}}}

void printallstudents(int a,int b){//function to print all students
int n;
for(n=0;n<a-b;n++){//here we substract b that meant the no of terms deleted

   printf("The student %s %s (E/%d/%d) has a cumulative GPA of %0.2f \n",sarray[n].firstName,sarray[n].lastName,sarray[n].batch,sarray[n].regNo,sarray[n].cGPA);
}}



void deleterecord(int a,int b){//function to delete a record
int n,count=0;


	for(n=0;n<1000;n++){

if(a==sarray[n].batch && b==sarray[n].regNo ){//checking what index has to be deleted

  break;
  }
  count++;
}

     for(n=0;n<count;n++){//equalising the same array before deleting record
        sarray[n]=sarray[n];

     }
    for(n=count;n<1000;n++){//equalising the rest skippping the one that should be deleted

        sarray[n]=sarray[n+1];
    }

}






