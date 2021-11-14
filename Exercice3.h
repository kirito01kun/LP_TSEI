/**************************************************************************
 *	Author : KBALA youssef						  *
 *	Class  : LP TSEI 						  *
 *	Date   : 14/11/2021						  *
 *	Description : This program will take 3 grades as input and show   *
 *		      their average on screen				  *
 * ************************************************************************/
int Ex3(){
	int N1,N2,N3;
	printf("Enter the 3 grades :\n");
	scanf("%d%d%d", &N1, &N2, &N3);
	printf("The average is :\n%d\n", (N1 + N2 + N3) / 3);
}
