#include<stdio.h>

int sum(int number1, int number2, char operator){

    if(operator == '+'){
        return number1 + number2;
    }
    else if(operator == '-'){
        return number1 - number2;
    }
    else if(operator == '*'){
        return number1 * number2;
    }
    else if(operator == '/'){
        return number1 / number2;
    }
    else{
        printf("Invalid operator");
        return 0;
    }

}


int main(){

    int number1, number2, result;

    char operator;

    printf("Enter first digit:\n ");
    scanf("%d", &number1);


    printf("Enter second digit:\n ");
    scanf("%d", &number2);

    printf("Enter operator value:\n ");
    scanf(" %c", &operator);

    printf("opration", operator);

    result = sum(number1, number2, operator);

    printf("The result is:\n %d", result);




    return 0;
}

