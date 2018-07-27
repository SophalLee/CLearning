#include <stdio.h>
#include <stdlib.h>
struct test 
{
    int a;
    int b;
};

int main(int argc, char** argv) {
    
    struct test aTest[5];
    struct test *ptrTest;
    
    aTest[0].a = 2;
    aTest[0].a = 3;
    aTest[1].a = 12;
    aTest[1].a = 13;
    aTest[2].a = 32;
    aTest[2].a = 33;    
    aTest[3].a = 42;
    aTest[3].a = 43;
    aTest[4].a = 52;
    aTest[4].a = 53;
    
    ptrTest = aTest;
    printf("Test[0]: %p\n",&aTest[0]);
    printf("ptrTest: %p\n\n",ptrTest);
    ptrTest++;
    printf("Test[1]: %p\n",&aTest[1]);
    printf("ptrTest++: %p\n\n",ptrTest);
    printf("Test[1].a: %p\n",&aTest[1].a);
    printf("Test[1].b: %p\n",&aTest[1].b);
    

    printf("Commit 1\n");
    printf("Commit 2\n");

    
    /*int a = 5;
    int *aPtr = &a;

    while(*aPtr == 0){
        a--;
    }*/
    
    return (EXIT_SUCCESS);
}

