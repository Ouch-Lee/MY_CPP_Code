#include <iostream>
#include "string.h"
using namespace std;

struct Student
{
    char name[4];
    int born;
    bool male;
};

void print_arr(int *arr, int lens)
{
    int i;
    for(i = 0; i<lens; i++)
    {   
        cout << arr[i] << endl;
    }
    cout << "/n" << endl;

}

int main()
{
    int numbers[4] = {0, 1, 2, 3};
    int * p = numbers + 1;
    p++;
    *p = 20;
    *(p-1) = 10;
    p[1] = 30; // 这里没看到
    print_arr(numbers, 4);



}