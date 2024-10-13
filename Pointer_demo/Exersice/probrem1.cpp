#include <iostream>


// void print_arr_add(int *arr, int lens) // 传入arr是一个指针，
// {   
//     int tmp_arr[lens] = &arr;
//     for(int j=0; j< lens; j++)
//     {
//         int tmep = &arr[j];
//     }
// }

int main()
{
    int * arr = new int[5];
    int *add[5];
    for(int i=0; i<5; i++)
    {
        arr[i] = i;
        add[i] = &arr[i];
    }
    

    for(int j=0; j<5;j++)
    {
        printf("the %d element is : %d", j, &(add[j]));
    }

}