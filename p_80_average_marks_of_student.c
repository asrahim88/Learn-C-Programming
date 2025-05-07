#include<stdio.h>
int main(){
    int student;
    printf("Enter Total Student Numbers: ");   
    scanf("%d", &student);

    int subjects;
    printf("Enter your total subjects: ");
    scanf("%d", &subjects);

    int marks;
    
    for (int i = 0; i < student; i++)
    {
        printf("\nPlease Enter the %dth student marks: ", i);
        int sum = 0;
        for (int j = 0; j < subjects; j++)
        {   
            scanf("%d", &marks);
            sum += marks;
        }
        printf("\nTotal average of %dth student marks= %d\n", i, sum/subjects);
        
    }
    
    
    return 0;
}