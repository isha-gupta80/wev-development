#include <stdio.h>
int main ()
{
    return 0;
}#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string>
using namespace std;

int count = 1;
char y;
int random1;
string entity[] = {"scissor", "rock", "paper"};

string computer_play(int a) {
    return (entity[a]);
}

void generateRandom() {
    random1 = rand() % 3;
  
    cout << computer_play(random1);
}

int main() {
    while (1) {
        printf("Do you want to continue \n");
        scanf(" %c", &y); // Notice the space before %c to consume any leading whitespace characters

        if (y == 'y') {
            generateRandom();
        } else if (y == 'n') {
            break;
        } else {
            printf("Enter either y/n\n");
        }
    }
    return 0;
}
