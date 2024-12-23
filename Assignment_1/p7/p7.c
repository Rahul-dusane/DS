#include <stdio.h>

#define ROWS 3
#define COLS 3
#define SIZE 5

// Function prototypes
void input_1DArray(int arr[], int size);
void Display_1DArray(int arr[], int size);
void sort_1DArray(int arr[], int size);
void search_1DArray(int arr[], int size);

void input_1DArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\n--Enter The Array Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void Display_1DArray(int arr[], int size)
{
    printf("\n--Array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort_1DArray(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    printf("\n--Descending Order Shorting ..");
}

void search_1DArray(int arr[], int size)
{
    int key;
    printf("\n--Enter element to search: ");
    scanf("%d", &key);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            printf("\n--Element found at index %d\n", i);
            return;
        }
    }
    printf("\n--Element not found\n");
}

// Function prototypes
void input_2DArray(int arr[ROWS][COLS]);
void Display_2DArray(int arr[ROWS][COLS]);
void sort_2DArray(int arr[ROWS][COLS]);
void search_2DArray(int arr[ROWS][COLS]);

void input_2DArray(int arr[ROWS][COLS])
{
    printf("Enter elements for a %dx%d array:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void Display_2DArray(int arr[ROWS][COLS])
{
    printf("Array elements:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void sort_2DArray(int arr[ROWS][COLS])
{
    int temp;
    // Sort rows
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS - 1; j++)
        {
            for (int k = j + 1; k < COLS; k++)
            {
                if (arr[i][j] > arr[i][k])
                {
                    temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }
    // Sort columns
    for (int j = 0; j < COLS; j++)
    {
        for (int i = 0; i < ROWS - 1; i++)
        {
            for (int k = i + 1; k < ROWS; k++)
            {
                if (arr[i][j] > arr[k][j])
                {
                    temp = arr[i][j];
                    arr[i][j] = arr[k][j];
                    arr[k][j] = temp;
                }
            }
        }
    }
}

void search_2DArray(int arr[ROWS][COLS])
{
    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (arr[i][j] == key)
            {
                printf("Element found at position (%d, %d)\n", i, j);
                return;
            }
        }
    }
    printf("Element not found\n");
}

int main()
{
    int choice, size = SIZE;
    int arr[SIZE];

menu:
    printf("\n1. Perform 1D array operations\n");
    printf("2. Perform 2D array operations\n");
    printf("3. Exit\n");
    printf("\n--Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
        {
            int sub1choice;
        menu1:
            printf("\n1. Input 1D array\n");
            printf("2. Display 1D array\n");
            printf("3. Sort 1D array\n");
            printf("4. Search in 1D array\n");
            printf("5. Delete from 1D array\n");
            printf("6. Return to main menu\n");

            printf("\n--Enter your choice: ");
            scanf("%d", &sub1choice);

            switch (sub1choice)
            {
                case 1:
                    input_1DArray(arr, size);
                    goto menu1;
                case 2:
                    Display_1DArray(arr, size);
                    goto menu1;
                case 3:
                    sort_1DArray(arr, size);
                    Display_1DArray(arr, size);
                    goto menu1;
                case 4:
                    search_1DArray(arr, size);
                    goto menu1;
                case 5:

                    Display_1DArray(arr, size);
                    goto menu1;
                case 6:
                    goto menu;
                default:
                    printf("Invalid choice. Please try again.\n");
                    break;
            }
        }

        case 2:
        {
            int arr2D[ROWS][COLS];

        menu2:
            printf("\n1. Input 2D array\n");
            printf("2. Display 2D array\n");
            printf("3. Sort 2D array\n");
            printf("4. Search in 2D array\n");
            printf("5. Delete from 2D array\n");
            printf("6. Return to main menu\n");

            int sub2choice;
                printf("\n--Enter your choice: ");
                scanf("%d", &sub2choice);

            switch (sub2choice)
            {
                case 1:
                    input_2DArray(arr2D);
                    goto menu2;
                case 2:
                    Display_2DArray(arr2D);
                    goto menu2;

                case 3:
                    sort_2DArray(arr2D);
                    Display_2DArray(arr2D);
                    goto menu2;
                case 4:
                    search_2DArray(arr2D);
                    goto menu2;
                case 5:

                    Display_2DArray(arr2D);
                    goto menu2;
                case 6:
                    goto menu;

                default:
                printf("Invalid choice. Please try again.\n");
                break;
            }
        }

        case 3:

            printf("\n---Program is EXIT Thank You !!..");
            break;

        default:

            printf("Invalid Choice . Please enter the Valid choice : ");

    }

    return 0;
}
