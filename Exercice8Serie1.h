/**************************************************************************
 *	Author : KBALA youssef						  *
 *	Class  : LP TSEI 						  *
 *	Date   : 14/11/2021						  *
 *	Description : This program will show the final price after	  *
 *		      and before discount of 5% if 			  *
 *		      the value exceed 1000DH 	  			  *
 * ************************************************************************/
int Ex8(){
	int numOfArticles, remise = 0;
	float unit_price, edited_price, sum;
	printf("Please enter the number of articles then the unit price :\n");
	scanf("%d%f", &numOfArticles, &unit_price);
	sum = numOfArticles * unit_price;
	sum += sum * 0.2;
	if(sum > 1000){
		remise = 5;
	}
	edited_price = sum - ((sum * remise)/100);
	printf("The price TTC is :%.2fDH\nThe discount is :%d %%\nThe final price :%.2fDH\n", sum, remise, edited_price);
}
