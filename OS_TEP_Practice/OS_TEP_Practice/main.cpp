//
//  main.cpp
//  OS_TEP_Practice
//
//  Created by Yong Zhao on 10/22/18.
//  Copyright © 2018 Yong Zhao. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
//    printf("location of code: %p\n", (void *)main);
//    printf("location of heap: %p\n", (void *)malloc(1));
//    int val = 0;
//    printf("location of stack: %p\n", (void *)& val);
//    std::cout << "Hello, World!\n";
    int arr[10];
    printf("sizeof arr: %lu\n", sizeof(arr));
    char str[] = "I am a man!";
    int* p = (int *)malloc(10 * sizeof(10));
    free(p);
    printf("sizeof str: %d\n", sizeof(p));
    return 0;
}
