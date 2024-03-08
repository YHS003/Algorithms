#include "Algorithms.h"

unsigned int My_Data[10] = {8, 1, 9, 5, 0, 7, 3, 2, 4, 6};
unsigned int My_Data1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 9, 8};

void Print_My_Data(unsigned int my_array[], unsigned int array_length)
{
    unsigned int Data_Counter = 0;

    for(Data_Counter=0; Data_Counter < array_length; Data_Counter++)
    {
        printf("%i\t", my_array[Data_Counter]);
    }

    printf("\n");
}

int main()
{
    Print_My_Data(My_Data1, 10);
    Selection_Sort(My_Data1, 10);
    Print_My_Data(My_Data1, 10);
}
