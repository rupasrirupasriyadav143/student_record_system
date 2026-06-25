#include<stdio.h>
int main()
{

    int choice=0, rollno=0, marks=0;
    char name[20];
    while(choice!=4)
{
    printf("\n===== Student Record System =====\n");

    printf("1. Add Student\n");
    printf("2. Display Student\n");
    printf("3. Search\n");
    printf("4. Exit program\n");
    printf("5. Update Marks\n");
    printf("6. Delete Student\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);
        if(choice==1)
        {
            printf("Enter Roll Number:");
            scanf("%d",&rollno);
            printf("Enter Student Name:");
            scanf("%s",name);
            printf("Enter Marks:");
            scanf("%d",&marks);
            printf("Student Added Successfully\n");
        }
       else if(choice==2)
{
    if(rollno==0)
    {
        printf("No Student Record Found\n");
    }
    else
    {
        printf("\nStudent Details\n");
        printf("Roll No: %d\n",rollno);
        printf("Name: %s\n",name);
        printf("Marks: %d\n",marks);
    }
}
        else if(choice==3)
        {
        int searchroll;
        printf("Enter Roll Number to search:");
        scanf("%d",&searchroll);
        if(searchroll==rollno)
        {
            printf("\nStudent Found\n");
            printf("Roll No: %d\n",rollno);
        printf("Name: %s\n",name);
        printf("Marks: %d\n",marks);
        }
        else{
            printf("Student Not Found\n");
        }
        }
        else if(choice==4)
        {
            printf("exit\n");
        }
        else if(choice==5)
        {
            int searchroll;
            printf("Enter Roll Number:");
            scanf("%d",&searchroll);
            if(searchroll==rollno)
            {
                printf("Enter New Marks:");
                scanf("%d",&marks);
                printf("Marks updated Successfully\n");
            }

            else{
                printf("Student Not Found\n");
            }
        }
        else if(choice==6)
        {
            int searchroll;
            printf("Enter Roll Number to Delete:");
            scanf("%d",&searchroll);
            if(searchroll==rollno)
            {
                rollno=0;
                marks=0;
                name[0]='\0';
                printf("Student Deleted Successfully\n");
            }
            else{
                printf("student Not Found\n");
            }
        }
        else{
            printf("invalid choice\n");
        }
        }
    return 0;
}
