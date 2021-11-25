/**************************************************************************
 *      Author : KBALA youssef                                            *
 *      Class  : LP TSEI                                                  *
 *      Date   : 24/11/2021                                               *
 *      Description : This program will take price before taxes and	  *
 *      		the TVA type then print the price and TVA	  *
 * ************************************************************************/
int Ex5S2(){
	float given_price, per, tva, final_price;
	char tva_code;
	printf("Enter the price then TVA type :\n");
	scanf("%f%s", &given_price, &tva_code);
	switch(tolower(tva_code)){
		case 'a':
			per = 5.5;
			break;
		case 'b':
			per = 7;
			break;
		case 'c':
			per = 19;
			break;
		case 'd':
			per = 33.33;
			break;
		default:
			printf("Incorrect code");
			break;
	}
	tva = (given_price * per) / 100;
	final_price = given_price + tva;
	printf("The TVA percentage is :%.2f%%\nThe TVA value for the given price is :%.2f\nThe final price is :%.2f\n", per, tva, final_price);

}
