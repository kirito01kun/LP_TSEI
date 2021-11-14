/**************************************************************************
 *	Author : KBALA youssef						  *
 *	Class  : LP TSEI 						  *
 *	Date   : 14/11/2021						  *
 *	Description : This program will give the final value of Q 	  *
 *		      products by adding 25DH if the total 		  *
 *		      value exceed 200DH				  *
 * ************************************************************************/
int Ex6(){
	float unit_price;
	int Q;
	printf("Please enter the unit price then how much units you buy :\n");
	scanf("%f%d", &unit_price, &Q);
	float sum = unit_price * Q;
	if(sum > 200){printf("The final value is :\n%.2f\n", sum + 25);}
	else{printf("The final value is :\n%.2f\n", sum);}
}
