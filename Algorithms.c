#include "Algorithms.h"

/**
  *@brief  : Linear Search Algorithm
  *@param  : (Data[]) Array that contains Data
  *@param  : (Max_Size) Array max size
  *@param  : (Req_Data) Data wanted to be found
  *@return : return Req_Data index if it found or -1 for not found
  */
sint32 LinearSearch(sint32 Data[], uint32 Max_Size, sint32 Req_Data)
{
    for(uint32 index = 0; index < Max_Size; index++)
    {
        if(Req_Data == Data[index])
        {
            return index;
        }
        else
        {
            /*Nothing*/
        }
    }

    return Not_Found;
}

/**
  *@brief  : Binary Search Algorithm
  *@param  : (Data[]) Array that contains Data
  *@param  : (Start_Index) start index for array
  *@param  : (End_Index) end index for array
  *@param  : (Req_Data) Data wanted to be found
  *@return : return Req_Data index if it found or -1 for not found
  */
sint32 BinarySearch(sint32 Data[], uint32 Start_Index, uint32 End_Index, sint32 Req_Data)
{
    uint32 Mid_Index = 0;

    while(Start_Index <= End_Index)
    {
        Mid_Index = Start_Index + ((End_Index - Start_Index) / 2);

        if(Req_Data == Data[Mid_Index])
        {
            return Mid_Index;
        }
        else if(Req_Data > Data[Mid_Index])
        {
            Start_Index = Mid_Index + 1;
        }
        else
        {
            End_Index = Mid_Index - 1;
        }
    }

    return Not_Found;
}

/**
  *@brief  : Function to swap Two Numbers
  *@param  : (PtrNum_1) Pointer to the First Number
  *@param  : (PtrNum_2) Pointer to the Second Number
  *@return : void
  */
static void Swap(sint32 *PtrNum_1, sint32 *PtrNum_2)
{
    sint32 TempNum = *PtrNum_2;

    *PtrNum_2 = *PtrNum_1;
    *PtrNum_1 = TempNum;
}

/**
  *@brief  : Algorithm to Sort Data
  *@param  : (Data) Data to be sorted
  *@param  : (Max_Size) Max_Size of Elements
  *@return : void
  */
void Bubble_Sort(sint32 Data[], uint32 Max_Size)
{
    uint8 Flag = 0;
    uint32 Iterator = 0;
    uint32 Checker = 0;

    Max_Size--;

    for(Iterator = 0; Iterator < Max_Size; Iterator++)
    {
        for(Checker = 0; Checker < Max_Size; Checker++)
        {
            if(Data[Checker] > Data[Checker + 1])
            {
                Flag = 1;
                Swap(&Data[Checker], &Data[Checker + 1]);
            }
            else
            {
                /*Nothing*/
            }
        }

        Checker++;

        if(!Flag)
        {
            break;
        }
        else
        {
            /*Nothing*/
        }
    }
}

/**
  *@brief  : Algorithm to Sort Data
  *@param  : (Data) Data to be sorted
  *@param  : (Max_Size) Max_Size of Elements
  *@return : void
  */
void Inserting_Sort(sint32 Data[], uint32 Max_Size)
{
    sint32 Compared_Elem;
    sint32 Compared_Index;

    for(uint32 Iterator = 1; Iterator < Max_Size; Iterator++)
    {
        Compared_Elem = Data[Iterator];
        Compared_Index = Iterator - 1;

        while((Compared_Elem < Data[Compared_Index]) && (0 <= Compared_Index))
        {
            Data[Compared_Index + 1] = Data[Compared_Index];
            Compared_Index--;
        }

        Data[Compared_Index + 1] = Compared_Elem;
    }
}

/**
  *@brief  : Algorithm to Sort Data
  *@param  : (Data) Data to be sorted
  *@param  : (Max_Size) Max_Size of Elements
  *@return : void
  */
void Selection_Sort(sint32 Data[], uint32 Max_Size)
{
    uint32 Minimum_Elem_Index = 0;

    for(uint32 Iterator = 0; Iterator < Max_Size - 1; Iterator++)
    {
        Minimum_Elem_Index = Iterator;

        for(uint32 Comp_Iterator = Iterator + 1; Comp_Iterator < Max_Size; Comp_Iterator++)
        {
            if(Data[Comp_Iterator] < Data[Minimum_Elem_Index])
            {
                Minimum_Elem_Index = Comp_Iterator;
            }
            else
            {
                /*Nothing to do*/
            }
        }

        Swap(&Data[Minimum_Elem_Index], &Data[Iterator]);
    }
}
