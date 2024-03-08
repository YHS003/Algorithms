#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define Not_Found -1

typedef unsigned char boolean;
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned long long uint64;
typedef signed char sint8;
typedef signed short sint16;
typedef signed int sint32;
typedef signed long long sint64;
typedef float float32;
typedef double float64;

/**
  *@brief  : Linear Search Algorithm
  *@param  : (Data[]) Array that contains Data
  *@param  : (Max_Size) Array max size
  *@param  : (Req_Data) Data wanted to be found
  *@return : return Req_Data index if it found or -1 for not found
  */
sint32 LinearSearch(sint32 Data[], uint32 Max_Size, sint32 Req_Data);

/**
  *@brief  : Binary Search Algorithm
  *@param  : (Data[]) Array that contains Data
  *@param  : (Start_Index) start index for array
  *@param  : (End_Index) end index for array
  *@param  : (Req_Data) Data wanted to be found
  *@return : return Req_Data index if it found or -1 for not found
  */
sint32 BinarySearch(sint32 Data[], uint32 Start_Index, uint32 End_Index, sint32 Req_Data);

/**
  *@brief  : Algorithm to Sort Data
  *@param  : (Data) Data to be sorted
  *@param  : (Max_Size) Max_Size of Elements
  *@return : void
  */
void Bubble_Sort(sint32 Data[], uint32 Max_Size);

/**
  *@brief  : Algorithm to Sort Data
  *@param  : (Data) Data to be sorted
  *@param  : (Max_Size) Max_Size of Elements
  *@return : void
  */
void Inserting_Sort(sint32 Data[], uint32 Max_Size);

/**
  *@brief  : Algorithm to Sort Data
  *@param  : (Data) Data to be sorted
  *@param  : (Max_Size) Max_Size of Elements
  *@return : void
  */
void Selection_Sort(sint32 Data[], uint32 Max_Size);

#endif // ALGRITHSM_H
