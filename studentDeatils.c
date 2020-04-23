#include<stdio.h>
#include<math.h>
int main()
{
	struct stud
	{
		int rollno;
		char name[50];
		char se[10];
		char dep[50];
		float fee;
		float marks;
	};
	struct stud s[2];
	printf("enter the details of student\n");
	for(int i=0;i<2;i++)
	{
		printf("enter Roll no of student %d\n",(i+1));
		scanf("%d",&s[i].rollno);
		printf("enter the name of student %d\n",(i+1));
		scanf("%s",s[i].name);
		printf("Enter the section of student %d\n",(i+1));
		scanf("%s",s[i].se);
		printf("enter the department of student %d\n",(i+1));
		scanf("%s",s[i].dep);
		printf("Enter the fees paid by student %d\n",(i+1));
		scanf("%f",&s[i].fee);
		printf("enter the marks of student %d\n",(i+1));
		scanf("%f",&s[i].marks);
	}
	int i=s[0].marks>s[1].marks?0:1;
    printf("Marks of student %d is greater\n",i+1);
    printf("Roll no of student is %d\n",s[i].rollno);
    printf("Name of student is ");
    puts(s[i].name);
    printf("\nSection of student is ");
    puts(s[i].se);
    printf("\ndepartment of student is ");
    puts(s[i].dep);
    printf("Fees of student is %f\n",s[i].fee);
    printf("Marks of student is %f\n",s[i].marks);
}
