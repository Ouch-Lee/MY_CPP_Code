#include <iostream>
using namespace std;
#include <string.h>
enum color {WHITE = 0, BLCAK = 1, RED =2, GREEN=3, BLUE =4};

struct Student
{
    int age;
    int grade;
    string name;
};


void print_struct(Student the_st);

int sum_arr(int* arr, int len)
{   
    // int len = sizeof(arr) / sizeof(arr[0]);
    cout << "the len:" << len << endl;
    int all = 0;
    for(int i=0; i< len; i++)
    {
        all += arr[i];
    } 
    return all;
}

void print_struct(const Student &the_st)
{
    cout << "The student :"  << the_st.name << 
    "age is :" << the_st.age << endl;
}



int main()
{
    int arr1[5];
    int arr2[5] = {1,2,3,4,5};

    // int the_len = 1;
    // while (the_len < 10)
    // {
    //     int arr3[the_len];
    //         cout << "len = " << the_len;
    //         cout << ", sizeof(num_array2)) = " 
    //         << sizeof(arr3) << endl;
    // the_len ++;
// }
    // int* arr_address = &arr2[0];
    // int a = sum_arr(arr2, 5);
    
    // cout << "the sum:" << a << endl;
    // // int n;
    // // int arr[n];
    // // int* arr2 = new int[n];

    Student ouch;
    ouch.age = 23;
    ouch.grade = 15;
    ouch.name = "LiAoqi";
    print_struct(ouch);
}