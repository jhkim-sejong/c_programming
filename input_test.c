#include <stdio.h>

int int_float_test(void)
{
    int int_input;
    float float_input;

    /* integer & float input test*/
    printf("input integer> \n");
    scanf("%d", &int_input);
    printf("int_input: %d\n", int_input);

    /* float input test*/
    printf("input float> ");
    scanf("%f", &float_input);
    printf("float_input: %f\n", float_input);

    return 0;
}

int character_test(void)
{
    char char_input;

    printf("input a character>");
    scanf("%c", &char_input);
    printf("char_input:%c\n", char_input);

    printf("input characters>");
    for (int i = 0; i < 3; i++)
    {
        scanf("%c", &char_input);
    } 
    printf("char_input: %c\n", char_input);

    return 0;

}


int string_test(void)
{
    char str_input[10];

    printf("input string> ");
    scanf("%s", str_input);
    printf("string_input: %s\n", str_input);
    return 0;
}

int main(void)
{
    printf("scanf test program!\n");

    int_float_test();
//    character_test();
//    string_test();

	return 0;
}

