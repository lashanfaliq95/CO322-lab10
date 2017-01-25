#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct _ {
int batch;
int regNo[20];
char firstName[20];
char lastName[20];
float cGPA;
}student_t;

student_t addstudent();
void printstudent(char* a);
	 student_t sarray[1000];
int main(){
	while(1){
	puts("--------------------------------------------");
	puts("A VOLATILE STUDENT RECORD MAINTENANCE SYSTEM");
	puts("--------------------------------------------");
	puts("0.Quit");
	puts("1.Insert a Student Record");
	puts("2.Print a Student Record");
	puts("3.Print all Student Records");
	puts("4.Delete a Student Record");

	int input,n=0;

	char a[20];
	scanf("%d",&input);
	if(input==0){break;}
	else if(input==1){
		sarray[n]=addstudent();

		}
	else if(input==2){
		printf("Enter the Registration Number:");
		scanf("%s",&a);
	 printstudent(a);
		}
	 n++;
}
	return 0;
	}

student_t addstudent(){
	student_t student1;
	printf("Enter the batch(11/12/13/14):");
		scanf("%d",&student1.batch);
		printf("Enter the registration number:");
		scanf("%d",&student1.regNo);
		printf("Enter the first name         :");
		scanf("%s",&student1.firstName);
		printf("Enter the last name          :");
		scanf("%s",&student1.lastName);
		printf("Enter the cumulative GPA      :");
		scanf("%f",&student1.cGPA);
	return student1;
	}
void printstudent(char* a){
	int n,condition=0,condition1=0;
	char temp_arrray1[2],temp_arrray2[3],temp_array3[2],temp_array4[3];
  for(n=2;n<4;n++){
   temp_arrray1[n-2]=a[n];
  }
int batch=atoi(temp_arrray1);
   for(n=5;n<8;n++){
temp_arrray2[n-5]=a[n];
 }
 int regnum=atoi(temp_arrray2);

	for(n=0;n<1000;n++){
itoa(sarray[n].batch,temp_array3,10);
  for(n=0;n<2;n++){
    if(temp_array3[n]==temp_arrray1[n])
    {continue;  }
    else{condition==1;}
  }
itoa(sarray[n].regNo,temp_array4,10);
for(n=0;n<3;n++){
    if(temp_array4[n]==temp_arrray2[n])
    {continue;  }
    else{condition1==1;}
  }


if(condition==0 && condition1==0){
		printf("The student %s %s (E/%d/%d) has a cumulative GPA of %f",&sarray[n].firstName,&sarray[n].lastName,&sarray[n].batch,&sarray[n].regNo,&sarray[n].cGPA);

break;}

	}}
