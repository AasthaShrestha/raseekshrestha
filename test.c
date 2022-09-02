/*#include <stdio.h>
#include <stdlib.h>
void hanoi(int n, char rodFrom, char rodMiddle, char rodTo){
    if(n==1){
        printf("Disk 1 moved from %c to %c \n",rodFrom,rodTo);
        return;
    }
    hanoi(n-1,rodFrom,rodTo,rodMiddle);
    printf("Disk %d moved from %c to %c \n",n,rodFrom,rodTo);
    hanoi(n-1,rodMiddle,rodFrom,rodTo);

}
int main()
{
    hanoi(3, 'A', 'B', 'C');
    return 0;
}

#include <stdio.h>
int seq(int n, int a, int b)
{
    if (n == 1)
    {
        return a;
    }
    else
    {
        return seq(n - 1, 3 * a - (b + 1), b + 1);
    }
}
int main()
{
    int n;
    printf("Print the sequence:");
    scanf("%d", &n);
    printf("The Sequence upto you want to print is:");
    int i, a = 2, b = 1;
    for (i = 1; i <= n; i++)
    {
        printf("%d\t", seq(i, a, b));
    }
    return 0;
}
#include <stdio.h>
int seq(int n)
{
    if (n == 1)
    {
        return 2;
    }
    else
    {
        return (3 * seq(n - 1) - n);
    }
}
int main()
{
    int n, i;
    printf("Print the sequence:");
    scanf("%d", &n);
    printf("The Sequence upto you want to print is:");

    for (i = 1; i <= n; i++)
    {
        printf("%d\t", seq(i));
    }
    return 0;
}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define LIST_SIZE 30
int main()
{
    int *element = NULL;
    int ch, i, j, n;
    int insdata, deldata, moddata, found;
    int top = -1;
    element = (int *)malloc(sizeof(int) * LIST_SIZE);
    while (1)
    {
        fflush(stdin);
        printf("\n\n basic Operations in a Linear List......");
        printf("\n 1.Create New List \t 2.Modify List \t 3.View List");
        printf("\n 4.Insert First \t 5.Insert Last \t 6.Insert Middle");
        printf("\n 7.Delete First \t 8.Delete Last \t 9.Delete Middle");
        printf("\nEnter the Choice 1 to 9: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            top = -1;
            printf("\n Enter the Limit (How many Elements):");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("\n Enter The Element [%d]:", (i + 1));
                scanf("%d", &element[++top]);
            }
            break;
        case 2:
            if (top == -1)
            {
                printf("\n Linear List is Empty:");
                break;
            }
            printf("\n Enter the Element for Modification:");
            scanf("%d", &moddata);
            found = 0;
            for (i = 0; i <= top; i++)
            {
                if (element[i] == moddata)
                {
                    found = 1;
                    printf("\n Enter The New Element :");
                    scanf("%d", &element[i]);
                    break;
                }
            }
            if (found == 0)
                printf("\n Element %d not found", moddata);
            break;
        case 3:
            if (top == -1)
                printf("\n \n Linear List is Empty:");
            else if (top == LIST_SIZE - 1)
                printf("\n Linear LIst is Full:");
            for (i = 0; i <= top; i++)
                printf("\n Element[%d]is-->%d", (i + 1), element[i]);
            break;
        case 4:
            if (top == LIST_SIZE - 1)
            {
                printf("\n Linear List is Full:");
                break;
            }
            top++;
            for (i = top; i > 0; i--)
                element[i] = element[i - 1];
            printf("\n Enter the Element:");
            scanf("%d", &element[0]);
            break;
        case 5:
            if (top == LIST_SIZE - 1)
            {
                printf("\n Linear List is Full:");
                break;
            }
            printf("\n Enter the Element:");
            scanf("%d", &element[++top]);
            break;
        case 6:
            if (top == LIST_SIZE - 1)
                printf("\n Linear List is Full:");
            else if (top == -1)
                printf("\n linear List is Empty.");
            else
            {
                found = 0;
                printf("\n Enter the Element after which the insertion is to be made:");
                scanf("%d", &insdata);
                for (i = 0; i <= top; i++)
                    if (element[i] == insdata)
                    {
                        found = 1;
                        top++;
                        for (j = top; j > i; j--)
                            element[j] = element[j - 1];
                        printf("\n Enter the Element :");
                        scanf("%d", &element[i + 1]);
                        break;
                    }
                if (found == 0)
                    printf("\n Element %d Not Found", insdata);
            }
            break;
        case 7:
            if (top == -1)
            {
                printf("\n Linear List is Empty:");
                break;
            }
            printf("\n Deleted Data-->Element :%d", element[0]);
            top--;
            for (i = 0; i <= top; i++)
                element[i] = element[i + 1];
            break;
        case 8:
            if (top == -1)
                printf("\n Linear List is Empty:");
            else
                printf("\n Deleted Data-->Element :%d", element[top--]);
            break;
        case 9:
            if (top == -1)
            {
                printf("\n Linear List is Empty:");
                break;
            }
            printf("\n Enter the Element for Deletion :");
            scanf("%d", &deldata);
            found = 0;
            for (i = 0; i <= top; i++)
                if (element[i] == deldata)
                {
                    found = 1;
                    printf("\n Deleted data-->Element :%d", element[i]);
                    top--;
                    for (j = i; j <= top; j++)
                        element[j] = element[j + 1];
                    break;
                }
            if (found == 0)
                printf("\n Element %d Not Found ", deldata);
            break;
        default:
            free(element);
            printf("\n End Of Run Of Your Program.........");
            exit(0);
        }
    }
}
#include <stdio.h>
int main()
{
    int a[100], n, i, j, position, swap;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d Numbers\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++)
    {
        position = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[position] > a[j])
                position = j;
        }
        if (position != i)
        {
            swap = a[i];
            a[i] = a[position];
            a[position] = swap;
        }
    }
    printf("Sorted Array:");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    return 0;
}*/
#include <math.h>
#include <stdio.h>

// Insertion Sort Function
void insertionSort(int array[], int n)
{
    int i, element, j;
    for (i = 1; i < n; i++)
    {
        element = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > element)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = element;
    }
}

// Function to print the elements of an array
void printArray(int array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("n");
}