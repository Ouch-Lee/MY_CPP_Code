# CPP NOTES

## g++

对于多文件（例如 `a.cpp` 和 `b.cpp`，以及头文件 `.h`）的 C++ 项目，你可以使用 `g++` 来编译和链接所有文件。也可以使用更为高效、自动化的工具如 CMake 来管理编译过程，特别是在项目复杂、文件较多的情况下。下面将介绍两种方法。



### 方法1：使用 `g++` 编译和链接



1. 逐步编译并链接
   - 首先，将每个源文件编译成对象文件（使用 `-c` 选项）。
   - 然后，将这些对象文件链接成一个可执行文件。

```
g++ -c a.cpp -o a.o 
g++ -c b.cpp -o b.o 
g++ a.o b.o -o my_program 
```

- 第一步和第二步将 `a.cpp` 和 `b.cpp` 编译为目标文件 `a.o` 和 `b.o`。
- 第三步将两个目标文件链接成一个可执行文件 `my_program`。



1. 一步编译并链接：
   - 你也可以在一个命令中直接编译并链接多个源文件。

```
bashg++ a.cpp b.cpp -o my_program 
```

这种方法适合文件数量较少时使用，但如果项目复杂、文件较多时，使用手动方式可能会比较麻烦。

注意-o是在.cpp文件后面。



### g++ debug =>gdb

如果没有成熟的IDE，最底层的debug方式是通过gdb插件

首先通过cpp文件生成 可debug文件

```
g++ -g -o debug_program demo.cpp 
```

然后运行下面👇命令就可以开始debug 了（得安装gdb命令

```
gbd debug_program
```





## Array

数组作为参数传入函数的时候，实际传入的是数组的地址，也即第一元素的地址；（已经证明）





## Makefile

[一个很全面的教程](https://seisman.github.io/how-to-write-makefile/introduction.html#id1)





## 指针*引用&

首先指针也算是一种数据类型，同 int, float 一样，因此在声明一个指针变量的的时候，和声明其他类型一样就好了，但是赋值需要赋一个指针（如果直接给一个变量会怎么样呢 =》 会报错！）

```c++
int a = 10;
int *b = &a; // &可以取对象的地址, 这个时候b是一个地址
int c = *b; // *可以把地址转为对象，也就是说&是从对象到地址，而*就是把地址到对象
```

* const pointer

  ```
  \\ 如果const写在最前面， 不能直接通过指针改变对象的值，相当于废了指针
  const int *p2 = &num;
  *p2 = 3; // error
  num = 3; ／／ it's ok
  
  \\ 如果const写在 p2 前面，指针不能改变，这才是真常指针
  int * const p2 = &num;
  
  
  ```

* pointer and array

  **数组的指针等于它自己，等于它第一个数组**

  ```cpp
  int num[5];
  num == &num == num[0];
  
      int arr[5] = {1,2,3,4,5};
      printf("the address by direct: %p\n", arr);
      printf("the address by & =  %p/n", &arr); // 两个结果应该一样
      printf("&arr[0] = %p/n", &arr[0]); // 如果数组的地址就是本体，那么这里应该是1
  
      int * adr2 = arr;
      adr2[3] = 6;
      printf("if changed: %d/n", arr[3]);
  ```

* malloc 和 new的区别（回去再总结）

* 当函数的input为数组时

