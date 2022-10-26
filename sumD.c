#include <stdio.h>
int main()
{
    //variable decalaration
    int input, number;
    int remainder, sum;
    //Data from user
    printf("Enter the number:");
    scanf("%d", &input);
    
    number = input;
    sum=0;
    while (number!=0)
    {
        remainder=number%10; //getting last digit in the number
        number=number/10; //getting new number after removing the last digit
        sum=sum+remainder; //sum of digits

    }
    //display the reversed number
    printf("The sum of digits in %d is: %d", input, sum);

    return 0;
}