#include <stdio.h>
#include <string.h>
 
struct student 
{
            int id;
            char name[20];
            float percentage;
}record;
 
//void func(struct student record);
 
int main() 
{
            record.id=1;
            strcpy(record.name, "Arijit");
	    char arr[10] = "Arijiti";
	    record.percentage = 86.5;
            func(record);
            printf(" Id is: %d \n", record.id);
            printf(" Name is: %s \n", record.name);
            printf(" Percentage is: %0.2f \n", record.percentage);
            return 0;
}
 
/*void func(struct student record)
{
            printf(" Id is: %d \n", record.id);
            printf(" Name is: %s \n", record.name);
            printf(" Percentage is: %0.2f \n", record.percentage);
}*/
