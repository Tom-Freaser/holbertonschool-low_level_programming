#include <stdlib.h>
#include <time.h>
/**
 * main - Determinatin if number positive negative or zero
 *
 * Return: Always 0 if sucess
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_AX / 2;
	/* your code goes there */
	if (n > 0){
            printf("%d is positive\n", n);
	}
    else if (n == 0){
        printf("%d is zero\n", n);
    }else{
        printf("%d is negative\n", n);
    }
	return (0);
