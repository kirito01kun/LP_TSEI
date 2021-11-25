/**************************************************************************
 *      Author : KBALA youssef                                            *
 *      Class  : LP TSEI                                                  *
 *      Date   : 25/11/2021                                               *
 *      Description : This program will solve ax^2+bx+c			  *
 * ************************************************************************/
int Ex9S2()
{
	int delta, a, b, c;
	printf("Enter the coefficients a,b and c of the equation :\n");
	scanf("%d%d%d", &a, &b, &c);
	delta = pow(b, 2) - 4 * a * c;
	if(delta > 0)
		printf("The solutions are :\n x1 = (%d + sqrt(%d)) / %d\nx2 = (%d - sqrt(%d)) / %d\n", -1*b, delta, 2*a, -1*b, delta, 2*a);
	else if(delta = 0)
		printf("The solution is :\nx = %d / %d\n", -1*b, 2*a);
	else
		printf("This equation does'nt accept real solutions, but complex ones.\n");
}
