#include<stdio.h>
#include<string.h>

typedef struct _ {
int batch;
char regNo[20];
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
		scanf("%s",&student1.regNo);
		printf("Enter the first name         :");
		scanf("%s",&student1.firstName);
		printf("Enter the last name          :");
		scanf("%s",&student1.lastName);
		printf("Enter the cumulative GPA      :");
		scanf("%f",&student1.cGPA);
	return student1;
	}
void printstudent(char* a){
	int n;
	for(n=0;n<1000;n++){
	if(strcmp(a,sarray[n].regNo)==0){
		printf("The student %s %s (%s) has a cumulative GPA of %f",&sarray[n].firstName,&sarray[n].lastName,&sarray[n].regNo,&sarray[n].cGPA);
		}}
	
	}