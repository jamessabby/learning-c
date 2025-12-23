#include <stdio.h>
#include <stdbool.h>

int main(void) {

    // This is my first program

    printf("hello\n");
    printf("I am James\n");

    // ALL TYPES OF VARIABLES

    // integer
    int age = 20;
    int year = 3;

    printf("I'm %d years old\n", age);
    printf("I'm a computer engineering student year %d\n", year);

    // float

    float grade = 1.0;
    float ppg = 20;

    printf("I just want to have a %.2f grade in Mixed Signals Lec this sem\n", grade);
    printf("I used to average %f ppg 3 years ago\n", ppg);

    // long float or doubles for high precision numbers

    double pi = 3.141592653589793;
    double e = 2.718281828459045;

    printf("The value of pi is %.15lf\n", pi);
    printf("The value of euler is %.15lf\n", e);

    //character

    char studentGrade = 'A';        // use single quotes

    printf("I used to be a straight %c grade student back in highschool.\n", studentGrade);

    //string 

    char team[] = "CEAT Men's Basketball";

    printf("During my 2nd year college, I managed to play for %s team\n", team);

    //booleans

    bool isPinoy = true;

    if (isPinoy) {
        printf("You are a stupih bih ahh pinoy nihh.\n");
    } else {
        printf("You are not a stupih bih ahh pinoy nihh.\n");
    };
    return 0;
}
