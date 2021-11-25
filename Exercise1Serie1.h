/**************************************************************************
 *	Author : KBALA youssef						  *
 *	Class  : LP TSEI 						  *
 *	Date   : 14/11/2021						  *
 *	Description : This program will calculate the final price of a    *
 *		      quantity of products while the TVA is 20%		  *
 * ************************************************************************/
int Ex1(){
	float unit_price;
	int Q;
	printf("Welcome Sir\nPlease enter the unit price :\n");
	scanf("%f", &unit_price);
	printf("Now enter the quantity ordered :\n");
	scanf("%d", &Q);
	float final_price = (Q * unit_price) + (Q * unit_price) * 0.2; // price + TVA 20%
	printf("The final price will be :\n%.2f\n", final_price);
}
