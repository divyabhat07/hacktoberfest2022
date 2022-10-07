#include<stdio.h>
int main()
{
    int i, j, k, rows;
    char ch;
    
    printf("Symbol for Rhombus Pattern =  ");
    scanf("%c", &ch);

    printf("Enter Rhombus Star Pattern Rows =  ");
    scanf("%d", &rows);

    printf("\n");
    i = rows;
    while(i >= 1)
    {
        j = 1;
        while(j <= i - 1)
        {
            printf(" ");
            j++;
        }
        k = 1;
        while(k <= rows)
        {
            printf("%c", ch);
            k++;
        }         
        printf("\n"); 
        i--;  
    }
    return 0;
}
