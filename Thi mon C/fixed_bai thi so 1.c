#include <stdio.h>
#include <stdlib.h>

//int a,b;
//    int arr[1000];

void mainMenu() {

    printf("Calculation:\n");
    printf("==============\n");
    printf("1. Input Number\n");
    printf("2. Calculate Sum\n");
    printf("3. Calculate Substraction\n");
    printf("4. Calculate Multiplication\n");
    printf("5. Calculate Division\n");
    printf("6. Exit\n");

}

void InputNum(int n, int arr[]){
    int i;
    for (i=1; i<n+1; i++){
        printf("Integer number %d = ",i+1);
        scanf("%d",&arr[i]);
    }
}

int CalSum(int n, int arr[]){
    int total = 0;

//    total = a + b;
    int i;
    for (i = 1; i < n+1; i++)
        total = total + arr[i];
    return total;
}

int Substraction(int n, int arr[]){
    int substract;
    int i;
        substract = arr[1];
    for (i = 2; i < n+1; i++)
        substract -= arr[i];
    return substract;
}


int Multiplication(int n, int arr[]){
    int Multipli = 1;
    int i;
    for (i = 1; i < n+1; i++)
        Multipli *= arr[i];
    return Multipli;
}


float Division(int a, int b){
    float _div;
    if (b != 0)
        _div = (float)a/(float)b;
    return _div;
}


void main()
{
    int arr[10];
    const n = 2;
    short _select = 0;
//    mainMenu();
//
//    InputNum(n,arr);
//
//    printf("Calculate Sum = %d", CalSum(n, arr));
//    printf("Calculate Substraction = %d", Substraction(n, arr));
//    printf("Calculate Multiplication = %d", Multiplication(n, arr));
//    printf("Calculate Division = %.2f", Division(arr[0], arr[1]));

    while (_select != 6){
        system("CLS");
        mainMenu();
        printf("Select a number: ");
        scanf("%d",&_select);
        printf("\n\n");

        switch (_select){
            case 1 :
                InputNum(n,arr);
                break;
            case 2 :
//                printf ("%d - %d", arr[0], arr[1]);
                printf("Calculate Sum = %d", CalSum(n,arr));
                printf("\nPress any key to Main menu");
                getch();
                break;
            case 3 :
                printf("Calculate Substraction = %d", Substraction(n, arr));
                printf("\nPress any key to Main menu");
                getch();
                break;
            case 4 :
                printf("Calculate Multiplication = %d", Multiplication(n, arr));
                printf("\nPress any key to Main menu");
                getch();
                break;
            case 5 :
                printf("Calculate Division = %.2f", Division(arr[1], arr[2]));
                printf("\nPress any key to Main menu");
                getch();
                break;
        }
    }
}
