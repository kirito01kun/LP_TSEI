/**************************************************************************
 *	Author : KBALA youssef						  *
 *	Class  : LP TSEI 						  *
 *	Date   : 14/11/2021						  *
 *	Description : This program will take as input two numbers  and    *
 *		      swap their values					  *
 * ************************************************************************/
int Ex2(){
	int n1,n2,swap;
	printf("Please enter the first the the second value :\n");
	scanf("%d%d", &n1, &n2);
	swap = n1;
	n1 = n2;
	n2 = swap;
	printf("After swaping the values became as follows :\nn1 :%d\nn2 :%d\n", n1,n2);
}
