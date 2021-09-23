#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string a = get_string("What's your name? ");
    printf("Hello, %s\n", a);
    string b = get_string("What's your favourite food? ");
    printf("Lovely! So you like %s\n", b);
    string c = get_string("Where do you live in?");
    printf("Very nice! I would love to visit %s one day!\n", c);

}