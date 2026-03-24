#include <stdio.h>

int add(int a, int b) {
    return a + b;

}

int main() {
  
    int result1 = add(0,5);
    int result2 = add(1,5);
    int result3 = add(2,5);
    int result4 = add(2,4);
    int result5 = add(3,5);
    int result6 = add(3,4);
    int result7 = add(4,5);
    int result8 = add(4,4);
    int result9 = add(5,4);
    int result10 = add(5,5);



    printf("%d\n", result1);
    printf("%d\n", result2);
    printf("%d\n", result3);
    printf("%d\n", result4);
    printf("%d\n", result5);
    printf("%d\n", result6);
    printf("%d\n", result7);
    printf("%d\n", result8);
    printf("%d\n", result9);
    printf("%d\n", result10);    
    return 0;

}