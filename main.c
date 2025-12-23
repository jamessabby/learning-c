#include <stdio.h>
#include <stdbool.h>
#include <string.h> //provides useful functions related to string

int main(void) {

    // // This is my first program

    // printf("hello\n");
    // printf("I am James\n\n");
    

    // // ALL TYPES OF VARIABLES

    // printf("EXAMPLES USING DIFFERENT VARIABLES:\n\n");

    // // integer
    // int age = 20;
    // int year = 3;


    // printf("I'm %d years old\n", age); 
    // printf("I'm a computer engineering student year %d\n", year);

    // // float

    // float grade = 1.0;
    // float ppg = 20;

    // printf("I just want to have a %.2f grade in Mixed Signals Lec this sem\n", grade);
    // printf("I used to average %.1f ppg 3 years ago\n", ppg);

    // // long float or doubles for high precision numbers

    // double pi = 3.141592653589793;
    // double e = 2.718281828459045;

    // printf("The value of pi is %.15lf\n", pi);
    // printf("The value of euler is %.15lf\n", e);

    // //character

    // char studentGrade = 'A';        // use single quotes

    // printf("I used to be a straight %c grade student back in highschool.\n", studentGrade);

    // //string 

    // char team[] = "CEAT Men's Basketball";

    // printf("During my 2nd year college, I managed to play for %s team\n", team);

    // //booleans

    // bool isPinoy = true;

    // if (isPinoy) {
    //     printf("You are a stupih bih ahh pinoy nihh.\n");
    // } else {
    //     printf("You are not a stupih bih ahh pinoy nihh.\n");
    // };
    

    // printf("\n");

    // // VARIABLES FORMAT SPECIFICERS

    // printf("EXAMPLES USING FORMAT SPECIFIERS:\n\n");


    // // Integer

    // int numWithMinimum = 2;
    // int numWithMinimumAndZeros = 3;

    // printf("This number leaves 2 spaces before it: ->%3d\n", numWithMinimum);
    // printf("This number leaves 3 spaces before it with zeros: ->%04d\n", numWithMinimumAndZeros);

    // // Floats

    // float price1 = 10.99;
    // float price2 = 3.49;
    // float price3 = -79.99;

    // printf("The price is $%+.2f\n", price1);
    // printf("The price is $%+.2f\n", price2);
    // printf("The price is $%+.2f\n", price3);
    
    
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';  // null terminator
    char name[30] = "";
    
    printf("Enter your age: ");
    scanf("%d", &age);          // & means we'll stick a value in age variable

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    getchar();

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);       // file get string (fgets), the input has
                                            // name = "James Sabio\n"
    name[strlen(name) - 1] = '\0';          // name = "James Sabio\0"

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);

    return 0;
}
