types of pointer

1.  Dangling pointer
2.  NULL pointer 
3.  void pointer
4.  wild pointer

1...............................................................................................................................
A pointer pointing to a memory location that has been deleted (or freed) is called dangling pointer.
There are three different ways where Pointer acts as dangling pointer

1. De-allocation of memory

// Deallocating a memory pointed by ptr causes
// dangling pointer
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int *ptr = (int *)malloc(sizeof(int));
  
    // After below free call, ptr becomes a 
    // dangling pointer
    free(ptr); 
      
    // No more a dangling pointer
    ptr = NULL;
}


2. Function Call

// The pointer pointing to local variable becomes
// dangling when local variable is not static.
#include<stdio.h>
  
int *fun()
{
    // x is local variable and goes out of
    // scope after an execution of fun() is
    // over.
    int x = 5;
  
    return &x;
}
  
// Driver Code
int main()
{
    int *p = fun();
    fflush(stdin);
  
    // p points to something which is not
    // valid anymore
    printf("%d", *p);
    return 0;
}
                       //output >> A garbage Address

3. Variable goes out of scope

void main()
{
   int *ptr;
   .....
   .....
   {
       int ch;
       ptr = &ch;
   } 
   .....   
   // Here ptr is dangling pointer
}



2......................................................................................................................................................
Void pointer is a specific pointer type – void * – a pointer that points to some data location in storage, 
which doesn’t have any specific type. Void refers to the type. Basically the type of data that it points to is can be any. 
If we assign address of char data type to void pointer it will become char Pointer, if int data type then int pointer and so on. 
Any pointer type is convertible to a void pointer hence it can point to any value.
Important Points.

1. void pointers cannot be dereferenced. It can however be done using typecasting the void pointer
2. Pointer arithmetic is not possible on pointers of void due to lack of concrete value and thus size

Example:

#include<stdlib.h>
  
int main()
{
    int x = 4;
    float y = 5.5;
      
    //A void pointer
    void *ptr;
    ptr = &x;
  
    // (int*)ptr - does type casting of void 
    // *((int*)ptr) dereferences the typecasted 
    // void pointer variable.
    printf("Integer variable is = %d", *( (int*) ptr) );
  
    // void pointer is now float
    ptr = &y; 
    printf("\nFloat variable is= %f", *( (float*) ptr) );
  
    return 0;
}                                                                //output >> Integer variable is = 4,  newline Float variable is= 5.500000



3................................................................................................................................................................
NULL Pointer is a pointer which is pointing to nothing. In case, if we don’t have address to be assigned to a pointer, then we can simply use NULL.
  

#include <stdio.h>
int main()
{
    // Null Pointer
    int *ptr = NULL;
      
    printf("The value of ptr is %p", ptr);
    return 0;
}                                                                     //output >> The value of ptr is (nil)


Important Points

NULL vs Uninitialized pointer – An uninitialized pointer stores an undefined value. A null pointer stores a defined value, 
but one that is defined by the environment to not be a valid address for any member or object.
NULL vs Void Pointer – Null pointer is a value, while void pointer is a type


4...................................................................................................................................................
A pointer which has not been initialized to anything (not even NULL) is known as wild pointer. 
The pointer may be initialized to a non-NULL garbage value that may not be a valid address.
  
int main()
{
    int *p;  /* wild pointer */
  
    int x = 10;
  
    // p is not a wild pointer now
    p = &x;
  
    return 0;
}
