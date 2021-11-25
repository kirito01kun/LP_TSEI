/**************************************************************************
 *      Author : KBALA youssef                                            *
 *      Class  : LP TSEI                                                  *
 *      Date   : 25/11/2021                                               *
 *      Description : This program will calculate how much cover needed	  *
 *      		based on the quantity   			  *
 * ************************************************************************/
int Ex8S2(){
	int quantity, A = 0, B = 0, C = 0;
	printf("Enter the required quantity :\n");
	scanf("%d", &quantity);
	if(quantity < 10){
		printf("Quantity not supported (less than 10)...\n");
		return 0;
	}
	while(quantity > 10)
	{
		if(quantity >= 100)
		{
			A = quantity / 100;
			quantity %= 100;
		}
		else if(quantity >= 30)
		{
			B = quantity / 30;
			quantity %= 30;
		}
		else if(quantity >= 10)
		{
			C = quantity / 10;
			quantity %= 10;
		}
	}
	printf("Its %d of A type\n%d of B type\n%d of C type\nAnd %d will last without cover \n", A, B, C, quantity);
}
