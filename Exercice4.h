/**************************************************************************
 *	Author : KBALA youssef						  *
 *	Class  : LP TSEI 						  *
 *	Date   : 14/11/2021						  *
 *	Description : This program will take as input 2 integers and one  *
 *		      float and print them on screen one by one then      *
 *		      print them on the same line separated by commas	  *
 * ************************************************************************/
int Ex4(){
	int n1,n2;
	float n3;
	printf("Please enter two integers and a float number :\n");
	scanf("%d%d%f", &n1, &n2, &n3);
	printf("Numbers you entered are :\n%d\n%d\n%f\n", n1, n2, n3);
	printf("And in one line are :\n%d, %d, %f\n",n1 ,n2 ,n3);	
}
